/*
 * Copyright (C) 2011 http://www.csie.ntu.edu.tw/~cjlin/libsvm/
 * Ported by likunarmstrong@gmail.com
 */

#ifndef SVM_TRAIN_H
#define SVM_TRAIN_H

int svmtrain(int argc, char **argv);
int svmtrain(int argc, char **argv, double **arrayXtr, int *arrayYtr, int **arrayIdxTr, int nRow, int *arrayNcol);
#endif
