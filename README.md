# LeadFloat

2023-10-01  davs2rt
Combined multiple redundant files into one file with a bit of history.

This approximates a sinusoidal lift and lower of the carousel horses by having a fast and slow speed.
Fast is done as the sinusoid would pass the origin, and slow is at the extremes.  
To approximate the sine wave, the code gradually changes rate from fast to slow in a mid-interval.

The horse lifting is made to start 2 seconds apart to de-synchronize the position of the horses
in their cycles.
