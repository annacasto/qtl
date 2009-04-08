/**********************************************************************
 * 
 * MQMmixture.h
 *
 * copyright (c) 2009 Danny Arends
 * last modified Apr, 2009
 * first written Feb, 2009
 *
 *     This program is free software; you can redistribute it and/or
 *     modify it under the terms of the GNU General Public License, as
 *     published by the Free Software Foundation; either version 2 of
 *     the License, or (at your option) any later version. 
 * 
 *     This program is distributed in the hope that it will be useful,
 *     but without any warranty; without even the implied warranty of
 *     merchantability or fitness for a particular purpose.  See the
 *     GNU General Public License for more details.
 * 
 *     A copy of the GNU General Public License is available at
 *     http://www.r-project.org/Licenses/
 *
 * C external functions used by the MQM algorithm
 * Contains: 
 *
 **********************************************************************/
/* ML estimation of recombination frequencies via EM;
    calculation of multilocus genotype probabilities;
    ignorance of unlikely genotypes*/
double rmixture(cmatrix marker, vector weight, vector r,
              cvector position, ivector ind,
              int Nind, int Naug, int Nmark,vector *mapdistance, char reestimate,char crosstype,Mmatrix MendelM,int verbose);


/* ML estimation of parameters in mixture model via EM;
*/
double QTLmixture(cmatrix loci, cvector cofactor, vector r, cvector position,
              vector y, ivector ind, int Nind, int Naug,
              int Nloci,
              double *variance, int em, vector *weight,char REMLorML,char fitQTL,char dominance,char crosstype,Mmatrix MendelM,int verbose);

/* end of MQMmixture.c */
