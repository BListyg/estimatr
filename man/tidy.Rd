% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/S3_tidy.R
\name{tidy}
\alias{tidy}
\alias{tidy.NULL}
\alias{tidy.default}
\alias{tidy.lm_robust}
\alias{tidy.iv_robust}
\alias{tidy.difference_in_means}
\alias{tidy.horvitz_thompson}
\title{Tidy the result of an estimator into a data.frame}
\usage{
tidy(object, ...)

\method{tidy}{NULL}(object, ...)

\method{tidy}{default}(object, ...)

\method{tidy}{lm_robust}(object, ...)

\method{tidy}{iv_robust}(object, ...)

\method{tidy}{difference_in_means}(object, ...)

\method{tidy}{horvitz_thompson}(object, ...)
}
\arguments{
\item{object}{An object returned by one of the estimators}

\item{...}{extra arguments (not used)}
}
\value{
A data.frame with with coefficient names, estimates, standard
errors, confidence intervals, p-values, degrees of freedom, and the
name of the outcome variable
}
\description{
Tidy the result of an estimator into a data.frame
}
