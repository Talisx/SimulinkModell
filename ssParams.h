/* Blackbox Code Composer Studio include file
place inside the blackbox CCS project folder

Created: 28-Oct-2019 14:20:59

Channel 1:
G1 =
 
      1
  ---------
  0.5 s + 1
 
Continuous-time transfer function.


Channel 2:
G2 =
 
           1
  --------------------
  0.25 s^2 + 0.3 s + 1
 
Continuous-time transfer function.

*/

#ifndef SSPARAMS_H_
#define SSPARAMS_H_
#define SYSTEM_ORDER 3
float A[3][3] = { { 0.99996, 0, 0 },
                { 0, 0.99998, -4e-05 },
                { 0, 4e-05, 1 } };
float B[3][2] = { { 3.9999e-05, 0 },
                { 0, 4e-05 },
                { 0, 7.9999e-10 } };
float C[2][3] = { { 1, 0, 0 },
                { 0, 0, 1 } };
float D[2][2] = { { 0, 0 },
                { 0, 0 } };

#endif /* SSPARAMS_H_ */
