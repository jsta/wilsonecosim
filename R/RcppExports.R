# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' Run example 2.3.1
#'
#' @param MAXTIME integer
#' @param PRNTTIME integer
#' @export
exercise_2_3_1 <- function(MAXTIME = 100L, PRNTTIME = 10L) {
    .Call('_wilsonecosim_exercise_2_3_1', PACKAGE = 'wilsonecosim', MAXTIME, PRNTTIME)
}

#' Run example 2.6.1
#'
#' @param NUMRUNS double
#' @param MAXTIME double
#' @param PRNTTIME int
#' @export
#'
exercise_2_6_1 <- function(MAXTIME = 100, PRNTTIME = 10L, NUMRUNS = 1) {
    .Call('_wilsonecosim_exercise_2_6_1', PACKAGE = 'wilsonecosim', MAXTIME, PRNTTIME, NUMRUNS)
}

#' Multiply a number by two
#'
#' @param x a single integer
#' @export
timesTwo <- function(x) {
    .Call('_wilsonecosim_timesTwo', PACKAGE = 'wilsonecosim', x)
}

