fastestIsPrime <- function(n) {
  return ((n %% 2 == 1) & (sqrt(n) - as.integer(sqrt(n)) != 0)) | (n <= 2)
}
