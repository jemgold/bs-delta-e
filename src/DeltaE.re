type lab = {
  .
  "L": int,
  "A": int,
  "B": int,
};

/**
  * The CIE76 color difference algorithm: a simple euclidean distance calculation.
  * http://en.wikipedia.org/wiki/Color_difference#CIE76
  */
[@bs.module "delta-e"]
external getDeltaE76 : (lab, lab) => float = "getDeltaE76";

/**
   * The CIE94 algorithm: an iteration of the CIE76 algorithm.
   * http://en.wikipedia.org/wiki/Color_difference#CIE94
   */
[@bs.module "delta-e"]
external getDeltaE94 : (lab, lab) => float = "getDeltaE94";

/**
 * The CIE2000 color difference algorithm.
 * http://en.wikipedia.org/wiki/Color_difference#CIEDE2000
 */
[@bs.module "delta-e"]
external getDeltaE00 : (lab, lab) => float = "getDeltaE00";