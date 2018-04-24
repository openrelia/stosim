// stosim.h file
 /*
 * Author: Jacob T. Ormerod
 *         (c) 2014 OpenReliability.org
 */

#ifndef _stosim_H
#define _stosim_H

#include <Rcpp.h>

RcppExport SEXP withStorage(SEXP a, SEXP b, SEXP c);

RcppExport  SEXP SimulationHistory(SEXP arg1, SEXP arg2, SEXP arg3,
      SEXP arg4,  SEXP arg5, SEXP arg6,
        SEXP arg7,  SEXP arg8, SEXP arg9,
          SEXP arg10,  SEXP arg11, SEXP arg12);

 RcppExport  SEXP addWpush(SEXP arg1, SEXP arg2, SEXP arg3,
      SEXP arg4,  SEXP arg5, SEXP arg6,
        SEXP arg7,  SEXP arg8);

  RcppExport  SEXP addOverlay(SEXP arg1, SEXP arg2, SEXP arg3,
      SEXP arg4,  SEXP arg5, SEXP arg6,
        SEXP arg7,  SEXP arg8);
        
   RcppExport  SEXP DetailOpLines(SEXP arg1, SEXP arg2, SEXP arg3,
      SEXP arg4); 
      
   RcppExport  SEXP MultiTrainSingleBU4a(SEXP arg1, SEXP arg2, SEXP arg3,
      SEXP arg4,  SEXP arg5, SEXP arg6,
        SEXP arg7,  SEXP arg8);

   RcppExport  SEXP MultiTrainWithInventory(SEXP arg1, SEXP arg2, SEXP arg3,
      SEXP arg4); 		

#endif
