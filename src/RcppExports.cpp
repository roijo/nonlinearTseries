// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// generalized_correlation_sum
NumericMatrix generalized_correlation_sum(const NumericVector& timeSeries, int timeLag, int theilerWindow, NumericVector& radii, int minEmbeddingDim, int maxEmbeddingDim, int corrSumOrder, int numberBoxes);
RcppExport SEXP _nonlinearTseries_generalized_correlation_sum(SEXP timeSeriesSEXP, SEXP timeLagSEXP, SEXP theilerWindowSEXP, SEXP radiiSEXP, SEXP minEmbeddingDimSEXP, SEXP maxEmbeddingDimSEXP, SEXP corrSumOrderSEXP, SEXP numberBoxesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type timeSeries(timeSeriesSEXP);
    Rcpp::traits::input_parameter< int >::type timeLag(timeLagSEXP);
    Rcpp::traits::input_parameter< int >::type theilerWindow(theilerWindowSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type radii(radiiSEXP);
    Rcpp::traits::input_parameter< int >::type minEmbeddingDim(minEmbeddingDimSEXP);
    Rcpp::traits::input_parameter< int >::type maxEmbeddingDim(maxEmbeddingDimSEXP);
    Rcpp::traits::input_parameter< int >::type corrSumOrder(corrSumOrderSEXP);
    Rcpp::traits::input_parameter< int >::type numberBoxes(numberBoxesSEXP);
    rcpp_result_gen = Rcpp::wrap(generalized_correlation_sum(timeSeries, timeLag, theilerWindow, radii, minEmbeddingDim, maxEmbeddingDim, corrSumOrder, numberBoxes));
    return rcpp_result_gen;
END_RCPP
}
// calculate_fluctuation_function
NumericVector calculate_fluctuation_function(NumericVector& yr, NumericVector& windowSizesVector);
RcppExport SEXP _nonlinearTseries_calculate_fluctuation_function(SEXP yrSEXP, SEXP windowSizesVectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type yr(yrSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type windowSizesVector(windowSizesVectorSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_fluctuation_function(yr, windowSizesVector));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_information_dimension
NumericMatrix rcpp_information_dimension(const NumericVector& timeSeries, const IntegerVector& embeddingDimensions, int timeLag, const NumericVector& fixedMasses, double radius, double increasingRadiusFactor, int nBoxes, int nReferenceVectors, int theilerWindow, int nNeighbours);
RcppExport SEXP _nonlinearTseries_rcpp_information_dimension(SEXP timeSeriesSEXP, SEXP embeddingDimensionsSEXP, SEXP timeLagSEXP, SEXP fixedMassesSEXP, SEXP radiusSEXP, SEXP increasingRadiusFactorSEXP, SEXP nBoxesSEXP, SEXP nReferenceVectorsSEXP, SEXP theilerWindowSEXP, SEXP nNeighboursSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type timeSeries(timeSeriesSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type embeddingDimensions(embeddingDimensionsSEXP);
    Rcpp::traits::input_parameter< int >::type timeLag(timeLagSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type fixedMasses(fixedMassesSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< double >::type increasingRadiusFactor(increasingRadiusFactorSEXP);
    Rcpp::traits::input_parameter< int >::type nBoxes(nBoxesSEXP);
    Rcpp::traits::input_parameter< int >::type nReferenceVectors(nReferenceVectorsSEXP);
    Rcpp::traits::input_parameter< int >::type theilerWindow(theilerWindowSEXP);
    Rcpp::traits::input_parameter< int >::type nNeighbours(nNeighboursSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_information_dimension(timeSeries, embeddingDimensions, timeLag, fixedMasses, radius, increasingRadiusFactor, nBoxes, nReferenceVectors, theilerWindow, nNeighbours));
    return rcpp_result_gen;
END_RCPP
}
// lyapunov_exponent
NumericMatrix lyapunov_exponent(const NumericVector& timeSeries, int minEmbeddingDim, int maxEmbeddingDim, int timeLag, double radius, int theilerWindow, int minNumNeighbours, int nRefPoints, int maxTimeSteps, int nBoxes);
RcppExport SEXP _nonlinearTseries_lyapunov_exponent(SEXP timeSeriesSEXP, SEXP minEmbeddingDimSEXP, SEXP maxEmbeddingDimSEXP, SEXP timeLagSEXP, SEXP radiusSEXP, SEXP theilerWindowSEXP, SEXP minNumNeighboursSEXP, SEXP nRefPointsSEXP, SEXP maxTimeStepsSEXP, SEXP nBoxesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type timeSeries(timeSeriesSEXP);
    Rcpp::traits::input_parameter< int >::type minEmbeddingDim(minEmbeddingDimSEXP);
    Rcpp::traits::input_parameter< int >::type maxEmbeddingDim(maxEmbeddingDimSEXP);
    Rcpp::traits::input_parameter< int >::type timeLag(timeLagSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type theilerWindow(theilerWindowSEXP);
    Rcpp::traits::input_parameter< int >::type minNumNeighbours(minNumNeighboursSEXP);
    Rcpp::traits::input_parameter< int >::type nRefPoints(nRefPointsSEXP);
    Rcpp::traits::input_parameter< int >::type maxTimeSteps(maxTimeStepsSEXP);
    Rcpp::traits::input_parameter< int >::type nBoxes(nBoxesSEXP);
    rcpp_result_gen = Rcpp::wrap(lyapunov_exponent(timeSeries, minEmbeddingDim, maxEmbeddingDim, timeLag, radius, theilerWindow, minNumNeighbours, nRefPoints, maxTimeSteps, nBoxes));
    return rcpp_result_gen;
END_RCPP
}
// calculate_time_series_histogram
NumericMatrix calculate_time_series_histogram(const NumericVector& x, const int& timeLag, const int& nPartitions);
RcppExport SEXP _nonlinearTseries_calculate_time_series_histogram(SEXP xSEXP, SEXP timeLagSEXP, SEXP nPartitionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type timeLag(timeLagSEXP);
    Rcpp::traits::input_parameter< const int& >::type nPartitions(nPartitionsSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_time_series_histogram(x, timeLag, nPartitions));
    return rcpp_result_gen;
END_RCPP
}
// calculate_mutual_information
NumericVector calculate_mutual_information(const NumericVector& tseries, const int& maxlag, const int& nPartitions);
RcppExport SEXP _nonlinearTseries_calculate_mutual_information(SEXP tseriesSEXP, SEXP maxlagSEXP, SEXP nPartitionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type tseries(tseriesSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxlag(maxlagSEXP);
    Rcpp::traits::input_parameter< const int& >::type nPartitions(nPartitionsSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_mutual_information(tseries, maxlag, nPartitions));
    return rcpp_result_gen;
END_RCPP
}
// getVectorNeighbours
IntegerVector getVectorNeighbours(const NumericMatrix& phaseSpace, int vectorIndex, double radius, int numberBoxes);
RcppExport SEXP _nonlinearTseries_getVectorNeighbours(SEXP phaseSpaceSEXP, SEXP vectorIndexSEXP, SEXP radiusSEXP, SEXP numberBoxesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type phaseSpace(phaseSpaceSEXP);
    Rcpp::traits::input_parameter< int >::type vectorIndex(vectorIndexSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type numberBoxes(numberBoxesSEXP);
    rcpp_result_gen = Rcpp::wrap(getVectorNeighbours(phaseSpace, vectorIndex, radius, numberBoxes));
    return rcpp_result_gen;
END_RCPP
}
// getAllNeighbours
List getAllNeighbours(const NumericMatrix& phaseSpace, double radius, int numberBoxes);
RcppExport SEXP _nonlinearTseries_getAllNeighbours(SEXP phaseSpaceSEXP, SEXP radiusSEXP, SEXP numberBoxesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type phaseSpace(phaseSpaceSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type numberBoxes(numberBoxesSEXP);
    rcpp_result_gen = Rcpp::wrap(getAllNeighbours(phaseSpace, radius, numberBoxes));
    return rcpp_result_gen;
END_RCPP
}
// get_NN_2Set_wrapper
Rcpp::List get_NN_2Set_wrapper(const Rcpp::NumericMatrix& data, const Rcpp::NumericMatrix& query, int dimension, int ND, int NQ, int K, double EPS, int SEARCHTYPE, int USEBDTREE, double SQRAD, Rcpp::IntegerVector& nn_index, Rcpp::NumericVector& distances);
RcppExport SEXP _nonlinearTseries_get_NN_2Set_wrapper(SEXP dataSEXP, SEXP querySEXP, SEXP dimensionSEXP, SEXP NDSEXP, SEXP NQSEXP, SEXP KSEXP, SEXP EPSSEXP, SEXP SEARCHTYPESEXP, SEXP USEBDTREESEXP, SEXP SQRADSEXP, SEXP nn_indexSEXP, SEXP distancesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type query(querySEXP);
    Rcpp::traits::input_parameter< int >::type dimension(dimensionSEXP);
    Rcpp::traits::input_parameter< int >::type ND(NDSEXP);
    Rcpp::traits::input_parameter< int >::type NQ(NQSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type EPS(EPSSEXP);
    Rcpp::traits::input_parameter< int >::type SEARCHTYPE(SEARCHTYPESEXP);
    Rcpp::traits::input_parameter< int >::type USEBDTREE(USEBDTREESEXP);
    Rcpp::traits::input_parameter< double >::type SQRAD(SQRADSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type nn_index(nn_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type distances(distancesSEXP);
    rcpp_result_gen = Rcpp::wrap(get_NN_2Set_wrapper(data, query, dimension, ND, NQ, K, EPS, SEARCHTYPE, USEBDTREE, SQRAD, nn_index, distances));
    return rcpp_result_gen;
END_RCPP
}
// nonlinear_noise_reduction
NumericVector nonlinear_noise_reduction(const NumericVector& timeSeries, int embeddingDimension, double radius, int nBoxes);
RcppExport SEXP _nonlinearTseries_nonlinear_noise_reduction(SEXP timeSeriesSEXP, SEXP embeddingDimensionSEXP, SEXP radiusSEXP, SEXP nBoxesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type timeSeries(timeSeriesSEXP);
    Rcpp::traits::input_parameter< int >::type embeddingDimension(embeddingDimensionSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type nBoxes(nBoxesSEXP);
    rcpp_result_gen = Rcpp::wrap(nonlinear_noise_reduction(timeSeries, embeddingDimension, radius, nBoxes));
    return rcpp_result_gen;
END_RCPP
}
// poincare_map
List poincare_map(const NumericMatrix& timeSeries, const NumericVector& hiperplanePoint, const NumericVector& normalVector);
RcppExport SEXP _nonlinearTseries_poincare_map(SEXP timeSeriesSEXP, SEXP hiperplanePointSEXP, SEXP normalVectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type timeSeries(timeSeriesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type hiperplanePoint(hiperplanePointSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type normalVector(normalVectorSEXP);
    rcpp_result_gen = Rcpp::wrap(poincare_map(timeSeries, hiperplanePoint, normalVector));
    return rcpp_result_gen;
END_RCPP
}
// get_rqa_histograms
List get_rqa_histograms(IntegerMatrix& neighs, IntegerVector& nneighs, int ntakens, int vmin, int lmin, IntegerVector& verticalHistogram, IntegerVector& diagonalHistogram, IntegerVector& recurrenceHistogram);
RcppExport SEXP _nonlinearTseries_get_rqa_histograms(SEXP neighsSEXP, SEXP nneighsSEXP, SEXP ntakensSEXP, SEXP vminSEXP, SEXP lminSEXP, SEXP verticalHistogramSEXP, SEXP diagonalHistogramSEXP, SEXP recurrenceHistogramSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix& >::type neighs(neighsSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type nneighs(nneighsSEXP);
    Rcpp::traits::input_parameter< int >::type ntakens(ntakensSEXP);
    Rcpp::traits::input_parameter< int >::type vmin(vminSEXP);
    Rcpp::traits::input_parameter< int >::type lmin(lminSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type verticalHistogram(verticalHistogramSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type diagonalHistogram(diagonalHistogramSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type recurrenceHistogram(recurrenceHistogramSEXP);
    rcpp_result_gen = Rcpp::wrap(get_rqa_histograms(neighs, nneighs, ntakens, vmin, lmin, verticalHistogram, diagonalHistogram, recurrenceHistogram));
    return rcpp_result_gen;
END_RCPP
}
// space_time_plot
NumericMatrix space_time_plot(NumericMatrix phaseSpace, NumericVector radii, int nTimeSteps, int timeStep, int nPercentages);
RcppExport SEXP _nonlinearTseries_space_time_plot(SEXP phaseSpaceSEXP, SEXP radiiSEXP, SEXP nTimeStepsSEXP, SEXP timeStepSEXP, SEXP nPercentagesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type phaseSpace(phaseSpaceSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type radii(radiiSEXP);
    Rcpp::traits::input_parameter< int >::type nTimeSteps(nTimeStepsSEXP);
    Rcpp::traits::input_parameter< int >::type timeStep(timeStepSEXP);
    Rcpp::traits::input_parameter< int >::type nPercentages(nPercentagesSEXP);
    rcpp_result_gen = Rcpp::wrap(space_time_plot(phaseSpace, radii, nTimeSteps, timeStep, nPercentages));
    return rcpp_result_gen;
END_RCPP
}
// neighsList2Sparse
void neighsList2Sparse(List& neighs, NumericMatrix& neighs_matrix);
RcppExport SEXP _nonlinearTseries_neighsList2Sparse(SEXP neighsSEXP, SEXP neighs_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type neighs(neighsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type neighs_matrix(neighs_matrixSEXP);
    neighsList2Sparse(neighs, neighs_matrix);
    return R_NilValue;
END_RCPP
}
// neighsList2SparseRCreator
void neighsList2SparseRCreator(const List& neighs, const int& ntakens, NumericMatrix& neighs_matrix);
RcppExport SEXP _nonlinearTseries_neighsList2SparseRCreator(SEXP neighsSEXP, SEXP ntakensSEXP, SEXP neighs_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type neighs(neighsSEXP);
    Rcpp::traits::input_parameter< const int& >::type ntakens(ntakensSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type neighs_matrix(neighs_matrixSEXP);
    neighsList2SparseRCreator(neighs, ntakens, neighs_matrix);
    return R_NilValue;
END_RCPP
}

RcppExport void boxAssistant(void *, void *, void *, void *, void *, void *, void *);
RcppExport void corrDim(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void generalizedCorrDim(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void informationDimension(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void maxLyapunov(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
RcppExport void nonlinearNoiseReduction(void *, void *, void *, void *, void *, void *);
RcppExport void spaceTimePlot(void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_CallMethodDef CallEntries[] = {
    {"_nonlinearTseries_generalized_correlation_sum", (DL_FUNC) &_nonlinearTseries_generalized_correlation_sum, 8},
    {"_nonlinearTseries_calculate_fluctuation_function", (DL_FUNC) &_nonlinearTseries_calculate_fluctuation_function, 2},
    {"_nonlinearTseries_rcpp_information_dimension", (DL_FUNC) &_nonlinearTseries_rcpp_information_dimension, 10},
    {"_nonlinearTseries_lyapunov_exponent", (DL_FUNC) &_nonlinearTseries_lyapunov_exponent, 10},
    {"_nonlinearTseries_calculate_time_series_histogram", (DL_FUNC) &_nonlinearTseries_calculate_time_series_histogram, 3},
    {"_nonlinearTseries_calculate_mutual_information", (DL_FUNC) &_nonlinearTseries_calculate_mutual_information, 3},
    {"_nonlinearTseries_getVectorNeighbours", (DL_FUNC) &_nonlinearTseries_getVectorNeighbours, 4},
    {"_nonlinearTseries_getAllNeighbours", (DL_FUNC) &_nonlinearTseries_getAllNeighbours, 3},
    {"_nonlinearTseries_get_NN_2Set_wrapper", (DL_FUNC) &_nonlinearTseries_get_NN_2Set_wrapper, 12},
    {"_nonlinearTseries_nonlinear_noise_reduction", (DL_FUNC) &_nonlinearTseries_nonlinear_noise_reduction, 4},
    {"_nonlinearTseries_poincare_map", (DL_FUNC) &_nonlinearTseries_poincare_map, 3},
    {"_nonlinearTseries_get_rqa_histograms", (DL_FUNC) &_nonlinearTseries_get_rqa_histograms, 8},
    {"_nonlinearTseries_space_time_plot", (DL_FUNC) &_nonlinearTseries_space_time_plot, 5},
    {"_nonlinearTseries_neighsList2Sparse", (DL_FUNC) &_nonlinearTseries_neighsList2Sparse, 2},
    {"_nonlinearTseries_neighsList2SparseRCreator", (DL_FUNC) &_nonlinearTseries_neighsList2SparseRCreator, 3},
    {"boxAssistant",            (DL_FUNC) &boxAssistant,             7},
    {"corrDim",                 (DL_FUNC) &corrDim,                 12},
    {"generalizedCorrDim",      (DL_FUNC) &generalizedCorrDim,      13},
    {"informationDimension",    (DL_FUNC) &informationDimension,    14},
    {"maxLyapunov",             (DL_FUNC) &maxLyapunov,             12},
    {"nonlinearNoiseReduction", (DL_FUNC) &nonlinearNoiseReduction,  6},
    {"spaceTimePlot",           (DL_FUNC) &spaceTimePlot,            9},
    {NULL, NULL, 0}
};

RcppExport void R_init_nonlinearTseries(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
