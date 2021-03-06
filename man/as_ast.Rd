% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/as_ast.R
\name{as_ast}
\alias{as_ast}
\title{Convert an object into an \code{rmd_ast}.}
\usage{
as_ast(x, ...)
}
\arguments{
\item{x}{Object to convert}

\item{...}{Unused, for extensibility.}
}
\description{
Currently only supports conversion of \code{rmd_tibble} objects.
}
\examples{
parse_rmd(system.file("hw01.Rmd", package="parsermd")) \%>\%
  as_tibble() \%>\%
  as_ast()

}
