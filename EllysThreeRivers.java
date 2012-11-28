public class EllysThreeRivers {
  public double getMin(int length, int walk, int[] width, int[] swim) {
    double l = 0;
    double r = length;
    double time = Integer.MAX_VALUE;
    while (r - l > 1e-10) {
      double c1 = l + (r - l) / 3;
      double c2 = l + (r - l) / 3 * 2;
      double t1 = Math.sqrt(width[0] * width[0] + c1 * c1) / swim[0]
          + getMin2(length - c1, walk, width, swim);
      double t2 = Math.sqrt(width[0] * width[0] + c2 * c2) / swim[0]
          + getMin2(length - c2, walk, width, swim);
      if (t1 < t2)
        r = c2;
      else
        l = c1;
      time = Math.min(t1, t2);
    }
    return time;
  }

  public double getMin2(double length, double walk, int[] width, int[] swim) {
    double l = 0;
    double r = length;
    double time = Integer.MAX_VALUE;
    while (r - l > 1e-10) {
      double c1 = l + (r - l) / 3;
      double c2 = l + (r - l) / 3 * 2;
      double t1 = c1 / walk + getMin3(length - c1, width, swim);
      double t2 = c2 / walk + getMin3(length - c2, width, swim);
      if (t1 < t2)
        r = c2;
      else
        l = c1;
      time = Math.min(t1, t2);
    }
    return time;
  }

  public double getMin3(double length, int[] width, int[] swim) {
    double l = 0;
    double r = length;
    double time = Integer.MAX_VALUE;
    while (r - l > 1e-10) {
      double c1 = l + (r - l) / 3;
      double c2 = l + (r - l) / 3 * 2;
      double t1 = Math.sqrt(width[1] * width[1] + c1 * c1)
          / swim[1]
          + Math.sqrt(width[2] * width[2] + (length - c1)
              * (length - c1)) / swim[2];
      double t2 = Math.sqrt(width[1] * width[1] + c2 * c2)
          / swim[1]
          + Math.sqrt(width[2] * width[2] + (length - c2)
              * (length - c2)) / swim[2];
      if (t1 < t2)
        r = c2;
      else
        l = c1;
      time = Math.min(t1, t2);
    }
    return time;
  }
  
  
}
