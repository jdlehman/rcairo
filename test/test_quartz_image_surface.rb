class QuartzImageSurfaceTest < Test::Unit::TestCase
  include CairoTestUtils

  def setup
    only_surface("Quartz")
  end

  def test_quartz_image_surface
    surface = Cairo::ImageSurface.new(100, 100)
    quartz_surface = Cairo::QuartzImageSurface.new(surface)
    assert_kind_of(Cairo::QuartzImageSurface, quartz_surface)
  end
end
