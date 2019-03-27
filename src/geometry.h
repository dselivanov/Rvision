Image _resize(Image image, int height, int width, double fx, double fy, int interpolation) {
  cv::Mat out;
  resize(image.image, out, cv::Size(width, height), fx, fy, interpolation);
  return Image(out);
}

Image _border(Image image, int top, int bottom, int left, int right, int borderType) {

  cv::Mat out;
  // FIXME col_value hardcoded for now
  cv::Scalar col_value( 0, 0, 0 );
  copyMakeBorder( image.image, out, top, bottom, left, right, borderType, col_value );
  return Image(out);
}
