% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/api.R
\name{validate_profile}
\alias{validate_profile}
\alias{validate_profile_v1}
\alias{validate_profile}
\title{Definition of the profile data format}
\usage{
validate_profile_v1(x)

validate_profile(x)
}
\arguments{
\item{x}{Profile data as returned by \code{\link[=read_pprof]{read_pprof()}}.}
}
\description{
The data format is stable between major releases.
In case of major updates, compatibility functions will be provided.

The \code{validate_profile_v1()} function checks a profile data object
for compatibility with the v1.0.0 format.

The \code{validate_profile()} function checks a profile data object
for compatibility with the most recent format
(currently v1.0.0).
}
\details{
The profile data is stored in a named list of \link{tibble}s.
(Exception: Components with names starting with a dot are permitted
after the required components, but will be ignored.)
This named list has the following components, subsequently referred to as
\emph{tables}:
\itemize{
\item \code{sample_types}
\item \code{samples}
\item \code{locations}
\item \code{functions}
}

The \code{sample_types} table has two character columns, \code{type} and \code{unit}.
Additional columns with a leading dot in the name are allowed
after the required columns.
It is currently restricted to one row with values \code{"samples"} and \code{"count"},
respectively.

The \code{samples} table has two columns, \code{value} (integer) and \code{locations}
(list).
Additional columns with a leading dot in the name are allowed
after the required columns.
The \code{value} column describes the number of consecutive samples for the
given location, and must be greater than zero.
Each element of the \code{locations} column is a tibble with one integer column,
\code{location_id}.
For each \code{location_id} value a corresponding observation in the \code{locations}
table must exist.
The locations are listed in inner-first order, i.e., the first location
corresponds to the innermost entry of the stack trace.

The \code{locations} table has three integer columns, \code{location_id},
\code{function_id}, and \code{line}.
Additional columns with a leading dot in the name are allowed
after the required columns.
All \code{location_id} values are unique.
For each \code{function_id} value a corresponding observation in the \code{functions}
table must exist. \code{NA} values are permitted.
The \code{line} column describes the line in the source code this location
corresponds to, zero if unknown. All values must be nonnegative.
\code{NA} values are permitted.

The \code{functions} table has five columns, \code{function_id} (integer),
\code{name}, \code{system_name} and \code{file_name} (character), and \code{start_line} (integer).
Additional columns with a leading dot in the name are allowed
after the required columns.
All \code{function_id} values are unique.
The \code{name}, \code{system_name} and \code{filename} columns describe function names
(demangled and mangled), and source file names for a function.
Both \code{name} and \code{system_name} must not contain empty strings.
The \code{start_line} column describes the start line of a function in its
source file, zero if unknown. All values must be nonnegative.
}
\section{Data model}{

\figure{dm.png}
}

