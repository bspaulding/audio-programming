#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("USAGE: frequencyToMIDINote 440\n");
    return 1;
  }

  double frequency = atof(argv[1]);

  double semitone_ratio = pow(2, 1/12.0);
  double c5 = 220.0 * pow(semitone_ratio, 3);
  double c0 = c5 * pow(0.5, 5);

  double fracmidi = log(frequency / c0) / log(semitone_ratio);
  int midinote = (int) (fracmidi + 0.5);
  int lowerBoundNote = (int) fracmidi;

  double midiNoteFrequency = c0 * pow(semitone_ratio, midinote);
  double lowerBoundNoteFrequency = c0 * pow(semitone_ratio, lowerBoundNote);
  double deviation = (midiNoteFrequency - frequency) / (lowerBoundNoteFrequency - midiNoteFrequency) * 100.0;

  printf("The nearest MIDI note to the frequency %f is %d (pitchbend %f percent)\n", frequency, midinote, deviation);

  return 0;
}
