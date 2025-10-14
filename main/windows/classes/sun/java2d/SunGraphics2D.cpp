#include <sun/java2d/SunGraphics2D.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/GradientPaint.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/Paint.h>
#include <java/awt/Point.h>
#include <java/awt/RadialGradientPaint.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/TexturePaint.h>
#include <java/awt/Transparency.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Area.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/AffineTransformOp.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/MultiResolutionImage.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/image/renderable/RenderContext.h>
#include <java/awt/image/renderable/RenderableImage.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/SunHints$Key.h>
#include <sun/awt/SunHints$Value.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/image/MultiResolutionToolkitImage.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/awt/image/ToolkitImage.h>
#include <sun/awt/util/PerformanceLogger.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontDesignMetrics.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontUtilities.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/NullSurfaceData.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FontInfo.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/XORComposite.h>
#include <sun/java2d/pipe/DrawImagePipe.h>
#include <sun/java2d/pipe/LoopPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderingEngine.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <sun/java2d/pipe/ShapeSpanIterator.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <sun/java2d/pipe/ValidatePipe.h>
#include <jcpp.h>

#undef A
#undef B
#undef C
#undef CLIP_DEVICE
#undef CLIP_RECTANGULAR
#undef CLIP_SHAPE
#undef COMP_ALPHA
#undef COMP_CUSTOM
#undef COMP_ISCOPY
#undef COMP_XOR
#undef D
#undef DIALOG
#undef EA
#undef EB
#undef EC
#undef IDENT_ATX
#undef IDENT_MATRIX
#undef INTKEY_AATEXT_LCD_CONTRAST
#undef INTKEY_ANTIALIASING
#undef INTKEY_FRACTIONALMETRICS
#undef INTKEY_INTERPOLATION
#undef INTKEY_RENDERING
#undef INTKEY_RESOLUTION_VARIANT
#undef INTKEY_STROKE_CONTROL
#undef INTKEY_TEXT_ANTIALIASING
#undef INTVAL_ANTIALIAS_OFF
#undef INTVAL_ANTIALIAS_ON
#undef INTVAL_FRACTIONALMETRICS_DEFAULT
#undef INTVAL_FRACTIONALMETRICS_OFF
#undef INTVAL_FRACTIONALMETRICS_ON
#undef INTVAL_INTERPOLATION_BICUBIC
#undef INTVAL_INTERPOLATION_BILINEAR
#undef INTVAL_INTERPOLATION_NEAREST_NEIGHBOR
#undef INTVAL_RENDER_DEFAULT
#undef INTVAL_RENDER_QUALITY
#undef INTVAL_RESOLUTION_VARIANT_BASE
#undef INTVAL_RESOLUTION_VARIANT_DEFAULT
#undef INTVAL_RESOLUTION_VARIANT_DPI_FIT
#undef INTVAL_STROKE_DEFAULT
#undef INTVAL_TEXT_ANTIALIAS_DEFAULT
#undef INTVAL_TEXT_ANTIALIAS_GASP
#undef INTVAL_TEXT_ANTIALIAS_LCD_HBGR
#undef INTVAL_TEXT_ANTIALIAS_LCD_HRGB
#undef INTVAL_TEXT_ANTIALIAS_LCD_VBGR
#undef INTVAL_TEXT_ANTIALIAS_LCD_VRGB
#undef INTVAL_TEXT_ANTIALIAS_OFF
#undef INTVAL_TEXT_ANTIALIAS_ON
#undef KEY_ANTIALIASING
#undef KEY_FRACTIONALMETRICS
#undef KEY_INTERPOLATION
#undef KEY_RENDERING
#undef KEY_STROKE_CONTROL
#undef KEY_TEXT_ANTIALIASING
#undef KEY_TEXT_ANTIALIAS_LCD_CONTRAST
#undef MINALLOCATED
#undef MIN_VALUE
#undef NON_RECTILINEAR_TRANSFORM_MASK
#undef NON_UNIFORM_SCALE_MASK
#undef OPAQUE
#undef PAINT_ALPHACOLOR
#undef PAINT_CUSTOM
#undef PAINT_GRADIENT
#undef PAINT_LIN_GRADIENT
#undef PAINT_OPAQUECOLOR
#undef PAINT_RAD_GRADIENT
#undef PAINT_TEXTURE
#undef PLAIN
#undef STROKE_CUSTOM
#undef STROKE_THIN
#undef STROKE_THINDASHED
#undef STROKE_WIDE
#undef TEXTARRSIZE
#undef TRANSFORM_ANY_TRANSLATE
#undef TRANSFORM_GENERIC
#undef TRANSFORM_INT_TRANSLATE
#undef TRANSFORM_ISIDENT
#undef TRANSFORM_TRANSLATESCALE
#undef TYPE_BICUBIC
#undef TYPE_BILINEAR
#undef TYPE_FLIP
#undef TYPE_GENERAL_TRANSFORM
#undef TYPE_IDENTITY
#undef TYPE_MASK_ROTATION
#undef TYPE_NEAREST_NEIGHBOR
#undef TYPE_TRANSLATION
#undef VALUE_INTERPOLATION_BICUBIC
#undef VALUE_INTERPOLATION_BILINEAR
#undef VALUE_INTERPOLATION_NEAREST_NEIGHBOR

using $AffineTransformArray = $Array<::java::awt::geom::AffineTransform>;
using $doubleArray2 = $Array<double, 2>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $GradientPaint = ::java::awt::GradientPaint;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $Paint = ::java::awt::Paint;
using $Point = ::java::awt::Point;
using $RadialGradientPaint = ::java::awt::RadialGradientPaint;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $TexturePaint = ::java::awt::TexturePaint;
using $Transparency = ::java::awt::Transparency;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $TextLayout = ::java::awt::font::TextLayout;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Area = ::java::awt::geom::Area;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $AffineTransformOp = ::java::awt::image::AffineTransformOp;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $RenderContext = ::java::awt::image::renderable::RenderContext;
using $RenderableImage = ::java::awt::image::renderable::RenderableImage;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ConstrainableGraphics = ::sun::awt::ConstrainableGraphics;
using $SunHints = ::sun::awt::SunHints;
using $SunHints$Key = ::sun::awt::SunHints$Key;
using $SunHints$Value = ::sun::awt::SunHints$Value;
using $MultiResolutionToolkitImage = ::sun::awt::image::MultiResolutionToolkitImage;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;
using $PerformanceLogger = ::sun::awt::util::PerformanceLogger;
using $Font2D = ::sun::font::Font2D;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $FontStrike = ::sun::font::FontStrike;
using $FontUtilities = ::sun::font::FontUtilities;
using $DestSurfaceProvider = ::sun::java2d::DestSurfaceProvider;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $NullSurfaceData = ::sun::java2d::NullSurfaceData;
using $Surface = ::sun::java2d::Surface;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FontInfo = ::sun::java2d::loops::FontInfo;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $RenderLoops = ::sun::java2d::loops::RenderLoops;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $XORComposite = ::sun::java2d::loops::XORComposite;
using $DrawImagePipe = ::sun::java2d::pipe::DrawImagePipe;
using $LoopPipe = ::sun::java2d::pipe::LoopPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $Region = ::sun::java2d::pipe::Region;
using $RenderingEngine = ::sun::java2d::pipe::RenderingEngine;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $ShapeSpanIterator = ::sun::java2d::pipe::ShapeSpanIterator;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;
using $TextPipe = ::sun::java2d::pipe::TextPipe;
using $ValidatePipe = ::sun::java2d::pipe::ValidatePipe;

namespace sun {
	namespace java2d {

$FieldInfo _SunGraphics2D_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SunGraphics2D, $assertionsDisabled)},
	{"PAINT_CUSTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, PAINT_CUSTOM)},
	{"PAINT_TEXTURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, PAINT_TEXTURE)},
	{"PAINT_RAD_GRADIENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, PAINT_RAD_GRADIENT)},
	{"PAINT_LIN_GRADIENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, PAINT_LIN_GRADIENT)},
	{"PAINT_GRADIENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, PAINT_GRADIENT)},
	{"PAINT_ALPHACOLOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, PAINT_ALPHACOLOR)},
	{"PAINT_OPAQUECOLOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, PAINT_OPAQUECOLOR)},
	{"COMP_CUSTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, COMP_CUSTOM)},
	{"COMP_XOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, COMP_XOR)},
	{"COMP_ALPHA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, COMP_ALPHA)},
	{"COMP_ISCOPY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, COMP_ISCOPY)},
	{"STROKE_CUSTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, STROKE_CUSTOM)},
	{"STROKE_WIDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, STROKE_WIDE)},
	{"STROKE_THINDASHED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, STROKE_THINDASHED)},
	{"STROKE_THIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, STROKE_THIN)},
	{"TRANSFORM_GENERIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, TRANSFORM_GENERIC)},
	{"TRANSFORM_TRANSLATESCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, TRANSFORM_TRANSLATESCALE)},
	{"TRANSFORM_ANY_TRANSLATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, TRANSFORM_ANY_TRANSLATE)},
	{"TRANSFORM_INT_TRANSLATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, TRANSFORM_INT_TRANSLATE)},
	{"TRANSFORM_ISIDENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, TRANSFORM_ISIDENT)},
	{"CLIP_SHAPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, CLIP_SHAPE)},
	{"CLIP_RECTANGULAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, CLIP_RECTANGULAR)},
	{"CLIP_DEVICE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphics2D, CLIP_DEVICE)},
	{"eargb", "I", nullptr, $PUBLIC, $field(SunGraphics2D, eargb)},
	{"pixel", "I", nullptr, $PUBLIC, $field(SunGraphics2D, pixel)},
	{"surfaceData", "Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $field(SunGraphics2D, surfaceData)},
	{"drawpipe", "Lsun/java2d/pipe/PixelDrawPipe;", nullptr, $PUBLIC, $field(SunGraphics2D, drawpipe)},
	{"fillpipe", "Lsun/java2d/pipe/PixelFillPipe;", nullptr, $PUBLIC, $field(SunGraphics2D, fillpipe)},
	{"imagepipe", "Lsun/java2d/pipe/DrawImagePipe;", nullptr, $PUBLIC, $field(SunGraphics2D, imagepipe)},
	{"shapepipe", "Lsun/java2d/pipe/ShapeDrawPipe;", nullptr, $PUBLIC, $field(SunGraphics2D, shapepipe)},
	{"textpipe", "Lsun/java2d/pipe/TextPipe;", nullptr, $PUBLIC, $field(SunGraphics2D, textpipe)},
	{"alphafill", "Lsun/java2d/loops/MaskFill;", nullptr, $PUBLIC, $field(SunGraphics2D, alphafill)},
	{"loops", "Lsun/java2d/loops/RenderLoops;", nullptr, $PUBLIC, $field(SunGraphics2D, loops)},
	{"imageComp", "Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC, $field(SunGraphics2D, imageComp)},
	{"paintState", "I", nullptr, $PUBLIC, $field(SunGraphics2D, paintState)},
	{"compositeState", "I", nullptr, $PUBLIC, $field(SunGraphics2D, compositeState)},
	{"strokeState", "I", nullptr, $PUBLIC, $field(SunGraphics2D, strokeState)},
	{"transformState", "I", nullptr, $PUBLIC, $field(SunGraphics2D, transformState)},
	{"clipState", "I", nullptr, $PUBLIC, $field(SunGraphics2D, clipState)},
	{"foregroundColor", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(SunGraphics2D, foregroundColor)},
	{"backgroundColor", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(SunGraphics2D, backgroundColor)},
	{"transform", "Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $field(SunGraphics2D, transform$)},
	{"transX", "I", nullptr, $PUBLIC, $field(SunGraphics2D, transX)},
	{"transY", "I", nullptr, $PUBLIC, $field(SunGraphics2D, transY)},
	{"defaultStroke", "Ljava/awt/Stroke;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SunGraphics2D, defaultStroke)},
	{"defaultComposite", "Ljava/awt/Composite;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SunGraphics2D, defaultComposite)},
	{"defaultFont", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunGraphics2D, defaultFont)},
	{"paint", "Ljava/awt/Paint;", nullptr, $PUBLIC, $field(SunGraphics2D, paint)},
	{"stroke", "Ljava/awt/Stroke;", nullptr, $PUBLIC, $field(SunGraphics2D, stroke)},
	{"composite", "Ljava/awt/Composite;", nullptr, $PUBLIC, $field(SunGraphics2D, composite)},
	{"font", "Ljava/awt/Font;", nullptr, $PROTECTED, $field(SunGraphics2D, font)},
	{"fontMetrics", "Ljava/awt/FontMetrics;", nullptr, $PROTECTED, $field(SunGraphics2D, fontMetrics)},
	{"renderHint", "I", nullptr, $PUBLIC, $field(SunGraphics2D, renderHint)},
	{"antialiasHint", "I", nullptr, $PUBLIC, $field(SunGraphics2D, antialiasHint)},
	{"textAntialiasHint", "I", nullptr, $PUBLIC, $field(SunGraphics2D, textAntialiasHint)},
	{"fractionalMetricsHint", "I", nullptr, $PROTECTED, $field(SunGraphics2D, fractionalMetricsHint)},
	{"lcdTextContrast", "I", nullptr, $PUBLIC, $field(SunGraphics2D, lcdTextContrast)},
	{"lcdTextContrastDefaultValue", "I", nullptr, $PRIVATE | $STATIC, $staticField(SunGraphics2D, lcdTextContrastDefaultValue)},
	{"interpolationHint", "I", nullptr, $PRIVATE, $field(SunGraphics2D, interpolationHint)},
	{"strokeHint", "I", nullptr, $PUBLIC, $field(SunGraphics2D, strokeHint)},
	{"interpolationType", "I", nullptr, $PUBLIC, $field(SunGraphics2D, interpolationType)},
	{"hints", "Ljava/awt/RenderingHints;", nullptr, $PUBLIC, $field(SunGraphics2D, hints)},
	{"constrainClip", "Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $field(SunGraphics2D, constrainClip)},
	{"constrainX", "I", nullptr, $PUBLIC, $field(SunGraphics2D, constrainX)},
	{"constrainY", "I", nullptr, $PUBLIC, $field(SunGraphics2D, constrainY)},
	{"clipRegion", "Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $field(SunGraphics2D, clipRegion)},
	{"usrClip", "Ljava/awt/Shape;", nullptr, $PUBLIC, $field(SunGraphics2D, usrClip)},
	{"devClip", "Lsun/java2d/pipe/Region;", nullptr, $PROTECTED, $field(SunGraphics2D, devClip)},
	{"resolutionVariantHint", "I", nullptr, $PRIVATE, $field(SunGraphics2D, resolutionVariantHint)},
	{"validFontInfo", "Z", nullptr, $PRIVATE, $field(SunGraphics2D, validFontInfo)},
	{"fontInfo", "Lsun/java2d/loops/FontInfo;", nullptr, $PRIVATE, $field(SunGraphics2D, fontInfo)},
	{"glyphVectorFontInfo", "Lsun/java2d/loops/FontInfo;", nullptr, $PRIVATE, $field(SunGraphics2D, glyphVectorFontInfo)},
	{"glyphVectorFRC", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE, $field(SunGraphics2D, glyphVectorFRC)},
	{"slowTextTransformMask", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunGraphics2D, slowTextTransformMask)},
	{"invalidpipe", "Lsun/java2d/pipe/ValidatePipe;", nullptr, $PROTECTED | $STATIC, $staticField(SunGraphics2D, invalidpipe)},
	{"IDENT_MATRIX", "[D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunGraphics2D, IDENT_MATRIX)},
	{"IDENT_ATX", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunGraphics2D, IDENT_ATX)},
	{"MINALLOCATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunGraphics2D, MINALLOCATED)},
	{"TEXTARRSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunGraphics2D, TEXTARRSIZE)},
	{"textTxArr", "[[D", nullptr, $PRIVATE | $STATIC, $staticField(SunGraphics2D, textTxArr)},
	{"textAtArr", "[Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE | $STATIC, $staticField(SunGraphics2D, textAtArr)},
	{"NON_UNIFORM_SCALE_MASK", "I", nullptr, $STATIC | $FINAL, $constField(SunGraphics2D, NON_UNIFORM_SCALE_MASK)},
	{"MinPenSizeAA", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunGraphics2D, MinPenSizeAA)},
	{"MinPenSizeAASquared", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunGraphics2D, MinPenSizeAASquared)},
	{"MinPenSizeSquared", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunGraphics2D, MinPenSizeSquared)},
	{"NON_RECTILINEAR_TRANSFORM_MASK", "I", nullptr, $STATIC | $FINAL, $constField(SunGraphics2D, NON_RECTILINEAR_TRANSFORM_MASK)},
	{"lastCAblit", "Lsun/java2d/loops/Blit;", nullptr, 0, $field(SunGraphics2D, lastCAblit)},
	{"lastCAcomp", "Ljava/awt/Composite;", nullptr, 0, $field(SunGraphics2D, lastCAcomp)},
	{"cachedFRC", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE, $field(SunGraphics2D, cachedFRC)},
	{}
};

$MethodInfo _SunGraphics2D_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/SurfaceData;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(static_cast<void(SunGraphics2D::*)($SurfaceData*,$Color*,$Color*,$Font*)>(&SunGraphics2D::init$))},
	{"addRenderingHints", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC},
	{"checkFontInfo", "(Lsun/java2d/loops/FontInfo;Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)Lsun/java2d/loops/FontInfo;", nullptr, $PUBLIC, $method(static_cast<$FontInfo*(SunGraphics2D::*)($FontInfo*,$Font*,$FontRenderContext*)>(&SunGraphics2D::checkFontInfo))},
	{"clearRect", "(IIII)V", nullptr, $PUBLIC},
	{"clip", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"clipRect", "(IIII)V", nullptr, $PUBLIC},
	{"clipTo", "(Ljava/awt/Rectangle;Ljava/awt/Rectangle;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SunGraphics2D::*)($Rectangle*,$Rectangle*)>(&SunGraphics2D::clipTo))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"cloneShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Shape*(*)($Shape*)>(&SunGraphics2D::cloneShape))},
	{"cloneTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $method(static_cast<$AffineTransform*(SunGraphics2D::*)()>(&SunGraphics2D::cloneTransform))},
	{"constrain", "(IIIILsun/java2d/pipe/Region;)V", nullptr, $PUBLIC, $method(static_cast<void(SunGraphics2D::*)(int32_t,int32_t,int32_t,int32_t,$Region*)>(&SunGraphics2D::constrain))},
	{"constrain", "(IIII)V", nullptr, $PUBLIC},
	{"copyArea", "(IIIIII)V", nullptr, $PUBLIC},
	{"copyImage", "(Ljava/awt/Image;IIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC, $method(static_cast<bool(SunGraphics2D::*)($Image*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$Color*,$ImageObserver*)>(&SunGraphics2D::copyImage))},
	{"create", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"doCopyArea", "(IIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(SunGraphics2D::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&SunGraphics2D::doCopyArea))},
	{"draw", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"drawArc", "(IIIIII)V", nullptr, $PUBLIC},
	{"drawBytes", "([BIIII)V", nullptr, $PUBLIC},
	{"drawChars", "([CIIII)V", nullptr, $PUBLIC},
	{"drawGlyphVector", "(Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC},
	{"drawHiDPIImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;Ljava/awt/geom/AffineTransform;)Ljava/lang/Boolean;", nullptr, $PRIVATE, $method(static_cast<$Boolean*(SunGraphics2D::*)($Image*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$Color*,$ImageObserver*,$AffineTransform*)>(&SunGraphics2D::drawHiDPIImage))},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC},
	{"drawLine", "(IIII)V", nullptr, $PUBLIC},
	{"drawOval", "(IIII)V", nullptr, $PUBLIC},
	{"drawPolygon", "([I[II)V", nullptr, $PUBLIC},
	{"drawPolyline", "([I[II)V", nullptr, $PUBLIC},
	{"drawRect", "(IIII)V", nullptr, $PUBLIC},
	{"drawRenderableImage", "(Ljava/awt/image/renderable/RenderableImage;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"drawRenderedImage", "(Ljava/awt/image/RenderedImage;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(IIIIII)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;FF)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;II)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;FF)V", nullptr, $PUBLIC},
	{"drawTranslatedRenderedImage", "(Ljava/awt/image/RenderedImage;Ljava/awt/Rectangle;II)V", nullptr, $PRIVATE, $method(static_cast<void(SunGraphics2D::*)($RenderedImage*,$Rectangle*,int32_t,int32_t)>(&SunGraphics2D::drawTranslatedRenderedImage))},
	{"fill", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"fillArc", "(IIIIII)V", nullptr, $PUBLIC},
	{"fillOval", "(IIII)V", nullptr, $PUBLIC},
	{"fillPolygon", "([I[II)V", nullptr, $PUBLIC},
	{"fillRect", "(IIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(IIIIII)V", nullptr, $PUBLIC},
	{"finalize", "()V", nullptr, $PUBLIC},
	{"fixRectangleOrientation", "([DLjava/awt/geom/Rectangle2D;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($doubles*,$Rectangle2D*)>(&SunGraphics2D::fixRectangleOrientation))},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getClip", "()Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getClipBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getClipBounds", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getCompClip", "()Lsun/java2d/pipe/Region;", nullptr, $PUBLIC, $method(static_cast<$Region*(SunGraphics2D::*)()>(&SunGraphics2D::getCompClip))},
	{"getComposite", "()Ljava/awt/Composite;", nullptr, $PUBLIC},
	{"getDefaultTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $method(static_cast<$AffineTransform*(SunGraphics2D::*)()>(&SunGraphics2D::getDefaultTransform))},
	{"getDestSurface", "()Lsun/java2d/Surface;", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(SunGraphics2D::*)()>(&SunGraphics2D::getDestination))},
	{"getDeviceColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC, $method(static_cast<$ColorModel*(SunGraphics2D::*)()>(&SunGraphics2D::getDeviceColorModel))},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontInfo", "()Lsun/java2d/loops/FontInfo;", nullptr, $PUBLIC, $method(static_cast<$FontInfo*(SunGraphics2D::*)()>(&SunGraphics2D::getFontInfo))},
	{"getFontMetrics", "()Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getFontRenderContext", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC},
	{"getGVFontInfo", "(Ljava/awt/Font;Ljava/awt/font/FontRenderContext;)Lsun/java2d/loops/FontInfo;", nullptr, $PUBLIC, $method(static_cast<$FontInfo*(SunGraphics2D::*)($Font*,$FontRenderContext*)>(&SunGraphics2D::getGVFontInfo))},
	{"getImageRegion", "(Ljava/awt/image/RenderedImage;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;Ljava/awt/geom/AffineTransform;II)Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Rectangle*(*)($RenderedImage*,$Region*,$AffineTransform*,$AffineTransform*,int32_t,int32_t)>(&SunGraphics2D::getImageRegion))},
	{"getPaint", "()Ljava/awt/Paint;", nullptr, $PUBLIC},
	{"getRenderingHint", "(Ljava/awt/RenderingHints$Key;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC},
	{"getResolutionVariant", "(Ljava/awt/image/MultiResolutionImage;IIIIIIIIIILjava/awt/geom/AffineTransform;)Ljava/awt/Image;", nullptr, $PRIVATE, $method(static_cast<$Image*(SunGraphics2D::*)($MultiResolutionImage*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$AffineTransform*)>(&SunGraphics2D::getResolutionVariant))},
	{"getStroke", "()Ljava/awt/Stroke;", nullptr, $PUBLIC},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $method(static_cast<$SurfaceData*(SunGraphics2D::*)()>(&SunGraphics2D::getSurfaceData))},
	{"getTileIndex", "(III)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&SunGraphics2D::getTileIndex))},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"hit", "(Ljava/awt/Rectangle;Ljava/awt/Shape;Z)Z", nullptr, $PUBLIC},
	{"hitClip", "(IIII)Z", nullptr, $PUBLIC},
	{"intersectByArea", "(Ljava/awt/Shape;Ljava/awt/Shape;ZZ)Ljava/awt/Shape;", nullptr, 0, $method(static_cast<$Shape*(SunGraphics2D::*)($Shape*,$Shape*,bool,bool)>(&SunGraphics2D::intersectByArea))},
	{"intersectRectShape", "(Ljava/awt/geom/Rectangle2D;Ljava/awt/Shape;ZZ)Ljava/awt/Shape;", nullptr, 0, $method(static_cast<$Shape*(SunGraphics2D::*)($Rectangle2D*,$Shape*,bool,bool)>(&SunGraphics2D::intersectRectShape))},
	{"intersectShapes", "(Ljava/awt/Shape;Ljava/awt/Shape;ZZ)Ljava/awt/Shape;", nullptr, 0, $method(static_cast<$Shape*(SunGraphics2D::*)($Shape*,$Shape*,bool,bool)>(&SunGraphics2D::intersectShapes))},
	{"invalidatePipe", "()V", nullptr, $PROTECTED, $method(static_cast<void(SunGraphics2D::*)()>(&SunGraphics2D::invalidatePipe))},
	{"invalidateTransform", "()V", nullptr, $PROTECTED, $method(static_cast<void(SunGraphics2D::*)()>(&SunGraphics2D::invalidateTransform))},
	{"isIntegerTranslation", "(Ljava/awt/geom/AffineTransform;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($AffineTransform*)>(&SunGraphics2D::isIntegerTranslation))},
	{"isRotated", "([D)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($doubles*)>(&SunGraphics2D::isRotated))},
	{"makeHints", "(Ljava/util/Map;)Ljava/awt/RenderingHints;", "(Ljava/util/Map<**>;)Ljava/awt/RenderingHints;", 0, $method(static_cast<$RenderingHints*(SunGraphics2D::*)($Map*)>(&SunGraphics2D::makeHints))},
	{"revalidateAll", "()V", nullptr, $PRIVATE, $method(static_cast<void(SunGraphics2D::*)()>(&SunGraphics2D::revalidateAll))},
	{"rotate", "(D)V", nullptr, $PUBLIC},
	{"rotate", "(DDD)V", nullptr, $PUBLIC},
	{"scale", "(DD)V", nullptr, $PUBLIC},
	{"scaleImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SunGraphics2D::*)($Image*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$Color*,$ImageObserver*)>(&SunGraphics2D::scaleImage))},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setClip", "(IIII)V", nullptr, $PUBLIC},
	{"setClip", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setComposite", "(Ljava/awt/Composite;)V", nullptr, $PUBLIC},
	{"setDevClip", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(SunGraphics2D::*)(int32_t,int32_t,int32_t,int32_t)>(&SunGraphics2D::setDevClip))},
	{"setDevClip", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(SunGraphics2D::*)($Rectangle*)>(&SunGraphics2D::setDevClip))},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setPaint", "(Ljava/awt/Paint;)V", nullptr, $PUBLIC},
	{"setPaintMode", "()V", nullptr, $PUBLIC},
	{"setRenderingHint", "(Ljava/awt/RenderingHints$Key;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setRenderingHints", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC},
	{"setStroke", "(Ljava/awt/Stroke;)V", nullptr, $PUBLIC},
	{"setTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"setXORMode", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"shear", "(DD)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"transformBounds", "(Ljava/awt/Rectangle;Ljava/awt/geom/AffineTransform;)Ljava/awt/Rectangle;", nullptr, $PROTECTED, $method(static_cast<$Rectangle*(SunGraphics2D::*)($Rectangle*,$AffineTransform*)>(&SunGraphics2D::transformBounds))},
	{"transformImage", "(Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SunGraphics2D::*)($Image*,$AffineTransform*,$ImageObserver*)>(&SunGraphics2D::transformImage))},
	{"transformShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PROTECTED, $method(static_cast<$Shape*(SunGraphics2D::*)($Shape*)>(&SunGraphics2D::transformShape))},
	{"transformShape", "(IILjava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Shape*(*)(int32_t,int32_t,$Shape*)>(&SunGraphics2D::transformShape))},
	{"transformShape", "(Ljava/awt/geom/AffineTransform;Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Shape*(*)($AffineTransform*,$Shape*)>(&SunGraphics2D::transformShape))},
	{"translate", "(DD)V", nullptr, $PUBLIC},
	{"translate", "(II)V", nullptr, $PUBLIC},
	{"untransformShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC, $method(static_cast<$Shape*(SunGraphics2D::*)($Shape*)>(&SunGraphics2D::untransformShape))},
	{"validateBasicStroke", "(Ljava/awt/BasicStroke;)V", nullptr, $PRIVATE, $method(static_cast<void(SunGraphics2D::*)($BasicStroke*)>(&SunGraphics2D::validateBasicStroke))},
	{"validateColor", "()V", nullptr, 0, $method(static_cast<void(SunGraphics2D::*)()>(&SunGraphics2D::validateColor))},
	{"validateCompClip", "()V", nullptr, $PROTECTED, $method(static_cast<void(SunGraphics2D::*)()>(&SunGraphics2D::validateCompClip))},
	{"validatePipe", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunGraphics2D::*)()>(&SunGraphics2D::validatePipe))},
	{}
};

$ClassInfo _SunGraphics2D_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.SunGraphics2D",
	"java.awt.Graphics2D",
	"sun.awt.ConstrainableGraphics,java.lang.Cloneable,sun.java2d.DestSurfaceProvider",
	_SunGraphics2D_FieldInfo_,
	_SunGraphics2D_MethodInfo_
};

$Object* allocate$SunGraphics2D($Class* clazz) {
	return $of($alloc(SunGraphics2D));
}

$String* SunGraphics2D::toString() {
	 return this->$Graphics2D::toString();
}

int32_t SunGraphics2D::hashCode() {
	 return this->$Graphics2D::hashCode();
}

bool SunGraphics2D::equals(Object$* arg0) {
	 return this->$Graphics2D::equals(arg0);
}

bool SunGraphics2D::$assertionsDisabled = false;
$Stroke* SunGraphics2D::defaultStroke = nullptr;
$Composite* SunGraphics2D::defaultComposite = nullptr;
$Font* SunGraphics2D::defaultFont = nullptr;
int32_t SunGraphics2D::lcdTextContrastDefaultValue = 0;
$ValidatePipe* SunGraphics2D::invalidpipe = nullptr;
$doubles* SunGraphics2D::IDENT_MATRIX = nullptr;
$AffineTransform* SunGraphics2D::IDENT_ATX = nullptr;
$doubleArray2* SunGraphics2D::textTxArr = nullptr;
$AffineTransformArray* SunGraphics2D::textAtArr = nullptr;
double SunGraphics2D::MinPenSizeAA = 0.0;
double SunGraphics2D::MinPenSizeAASquared = 0.0;
double SunGraphics2D::MinPenSizeSquared = 0.0;

void SunGraphics2D::init$($SurfaceData* sd, $Color* fg, $Color* bg, $Font* f) {
	$Graphics2D::init$();
	$set(this, surfaceData, sd);
	$set(this, foregroundColor, fg);
	$set(this, backgroundColor, bg);
	$set(this, stroke, SunGraphics2D::defaultStroke);
	$set(this, composite, SunGraphics2D::defaultComposite);
	$set(this, paint, this->foregroundColor);
	$init($CompositeType);
	$set(this, imageComp, $CompositeType::SrcOverNoEa);
	this->renderHint = $SunHints::INTVAL_RENDER_DEFAULT;
	this->antialiasHint = $SunHints::INTVAL_ANTIALIAS_OFF;
	this->textAntialiasHint = $SunHints::INTVAL_TEXT_ANTIALIAS_DEFAULT;
	this->fractionalMetricsHint = $SunHints::INTVAL_FRACTIONALMETRICS_OFF;
	this->lcdTextContrast = SunGraphics2D::lcdTextContrastDefaultValue;
	this->interpolationHint = -1;
	this->strokeHint = $SunHints::INTVAL_STROKE_DEFAULT;
	this->resolutionVariantHint = $SunHints::INTVAL_RESOLUTION_VARIANT_DEFAULT;
	this->interpolationType = $AffineTransformOp::TYPE_NEAREST_NEIGHBOR;
	$set(this, transform$, getDefaultTransform());
	if (!$nc(this->transform$)->isIdentity()) {
		invalidateTransform();
	}
	validateColor();
	$set(this, font, f);
	if (this->font == nullptr) {
		$set(this, font, SunGraphics2D::defaultFont);
	}
	setDevClip($($nc(sd)->getBounds()));
	invalidatePipe();
}

$AffineTransform* SunGraphics2D::getDefaultTransform() {
	$var($GraphicsConfiguration, gc, getDeviceConfiguration());
	return (gc == nullptr) ? $new($AffineTransform) : $nc(gc)->getDefaultTransform();
}

$Object* SunGraphics2D::clone() {
	try {
		$var(SunGraphics2D, g, $cast(SunGraphics2D, $Graphics2D::clone()));
		$set($nc(g), transform$, $new($AffineTransform, this->transform$));
		if (this->hints != nullptr) {
			$set(g, hints, $cast($RenderingHints, $nc(this->hints)->clone()));
		}
		if (this->fontInfo != nullptr) {
			if (this->validFontInfo) {
				$set(g, fontInfo, $cast($FontInfo, $nc(this->fontInfo)->clone()));
			} else {
				$set(g, fontInfo, nullptr);
			}
		}
		if (this->glyphVectorFontInfo != nullptr) {
			$set(g, glyphVectorFontInfo, $cast($FontInfo, $nc(this->glyphVectorFontInfo)->clone()));
			$set(g, glyphVectorFRC, this->glyphVectorFRC);
		}
		return $of(g);
	} catch ($CloneNotSupportedException&) {
		$catch();
	}
	return $of(nullptr);
}

$Graphics* SunGraphics2D::create() {
	return $cast($Graphics, clone());
}

void SunGraphics2D::setDevClip(int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Region, c, this->constrainClip);
	if (c == nullptr) {
		$set(this, devClip, $Region::getInstanceXYWH(x, y, w, h));
	} else {
		$set(this, devClip, $nc(c)->getIntersectionXYWH(x, y, w, h));
	}
	validateCompClip();
}

void SunGraphics2D::setDevClip($Rectangle* r) {
	setDevClip($nc(r)->x, r->y, r->width, r->height);
}

void SunGraphics2D::constrain(int32_t x, int32_t y, int32_t w, int32_t h, $Region* region$renamed) {
	$var($Region, region, region$renamed);
	if ((x | y) != 0) {
		translate(x, y);
	}
	if (this->transformState > SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		clipRect(0, 0, w, h);
		return;
	}
	double scaleX = $nc(this->transform$)->getScaleX();
	double scaleY = $nc(this->transform$)->getScaleY();
	x = (this->constrainX = $cast(int32_t, $nc(this->transform$)->getTranslateX()));
	y = (this->constrainY = $cast(int32_t, $nc(this->transform$)->getTranslateY()));
	w = $Region::dimAdd(x, $Region::clipScale(w, scaleX));
	h = $Region::dimAdd(y, $Region::clipScale(h, scaleY));
	$var($Region, c, this->constrainClip);
	if (c == nullptr) {
		$assign(c, $Region::getInstanceXYXY(x, y, w, h));
	} else {
		$assign(c, $nc(c)->getIntersectionXYXY(x, y, w, h));
	}
	if (region != nullptr) {
		$assign(region, region->getScaledRegion(scaleX, scaleY));
		$assign(region, $nc(region)->getTranslatedRegion(x, y));
		$assign(c, $nc(c)->getIntersection(region));
	}
	if (c == this->constrainClip) {
		return;
	}
	$set(this, constrainClip, c);
	if (!$nc(this->devClip)->isInsideQuickCheck(c)) {
		$set(this, devClip, $nc(this->devClip)->getIntersection(c));
		validateCompClip();
	}
}

void SunGraphics2D::constrain(int32_t x, int32_t y, int32_t w, int32_t h) {
	constrain(x, y, w, h, nullptr);
}

void SunGraphics2D::invalidatePipe() {
	$set(this, drawpipe, SunGraphics2D::invalidpipe);
	$set(this, fillpipe, SunGraphics2D::invalidpipe);
	$set(this, shapepipe, SunGraphics2D::invalidpipe);
	$set(this, textpipe, SunGraphics2D::invalidpipe);
	$set(this, imagepipe, SunGraphics2D::invalidpipe);
	$set(this, loops, nullptr);
}

void SunGraphics2D::validatePipe() {
	if (!$nc(this->surfaceData)->isValid()) {
		$throwNew($InvalidPipeException, "attempt to validate Pipe with invalid SurfaceData"_s);
	}
	$nc(this->surfaceData)->validatePipe(this);
}

$Shape* SunGraphics2D::intersectShapes($Shape* s1, $Shape* s2, bool keep1, bool keep2) {
	if ($instanceOf($Rectangle, s1) && $instanceOf($Rectangle, s2)) {
		return $nc(($cast($Rectangle, s1)))->intersection($cast($Rectangle, s2));
	}
	if ($instanceOf($Rectangle2D, s1)) {
		return intersectRectShape($cast($Rectangle2D, s1), s2, keep1, keep2);
	} else if ($instanceOf($Rectangle2D, s2)) {
		return intersectRectShape($cast($Rectangle2D, s2), s1, keep2, keep1);
	}
	return intersectByArea(s1, s2, keep1, keep2);
}

$Shape* SunGraphics2D::intersectRectShape($Rectangle2D* r, $Shape* s$renamed, bool keep1, bool keep2) {
	$var($Shape, s, s$renamed);
	if ($instanceOf($Rectangle2D, s)) {
		$var($Rectangle2D, r2, $cast($Rectangle2D, s));
		$var($Rectangle2D, outrect, nullptr);
		if (!keep1) {
			$assign(outrect, r);
		} else if (!keep2) {
			$assign(outrect, r2);
		} else {
			$assign(outrect, $new($Rectangle2D$Float));
		}
		double var$0 = $nc(r)->getX();
		double x1 = $Math::max(var$0, $nc(r2)->getX());
		double var$2 = $nc(r)->getX();
		double var$1 = var$2 + r->getWidth();
		double var$3 = $nc(r2)->getX();
		double x2 = $Math::min(var$1, var$3 + r2->getWidth());
		double var$4 = $nc(r)->getY();
		double y1 = $Math::max(var$4, $nc(r2)->getY());
		double var$6 = $nc(r)->getY();
		double var$5 = var$6 + r->getHeight();
		double var$7 = $nc(r2)->getY();
		double y2 = $Math::min(var$5, var$7 + r2->getHeight());
		if (((x2 - x1) < 0) || ((y2 - y1) < 0)) {
			$nc(outrect)->setFrameFromDiagonal((double)0, (double)0, (double)0, (double)0);
		} else {
			$nc(outrect)->setFrameFromDiagonal(x1, y1, x2, y2);
		}
		return outrect;
	}
	if ($nc(r)->contains($($nc(s)->getBounds2D()))) {
		if (keep2) {
			$assign(s, cloneShape(s));
		}
		return s;
	}
	return intersectByArea(r, s, keep1, keep2);
}

$Shape* SunGraphics2D::cloneShape($Shape* s) {
	$init(SunGraphics2D);
	return $new($GeneralPath, s);
}

$Shape* SunGraphics2D::intersectByArea($Shape* s1, $Shape* s2$renamed, bool keep1, bool keep2) {
	$var($Shape, s2, s2$renamed);
	$var($Area, a1, nullptr);
	$var($Area, a2, nullptr);
	if (!keep1 && ($instanceOf($Area, s1))) {
		$assign(a1, $cast($Area, s1));
	} else if (!keep2 && ($instanceOf($Area, s2))) {
		$assign(a1, $cast($Area, s2));
		$assign(s2, s1);
	} else {
		$assign(a1, $new($Area, s1));
	}
	if ($instanceOf($Area, s2)) {
		$assign(a2, $cast($Area, s2));
	} else {
		$assign(a2, $new($Area, s2));
	}
	$nc(a1)->intersect(a2);
	if (a1->isRectangular()) {
		return a1->getBounds();
	}
	return a1;
}

$Region* SunGraphics2D::getCompClip() {
	if (!$nc(this->surfaceData)->isValid()) {
		revalidateAll();
	}
	return this->clipRegion;
}

$Font* SunGraphics2D::getFont() {
	if (this->font == nullptr) {
		$set(this, font, SunGraphics2D::defaultFont);
	}
	return this->font;
}

$FontInfo* SunGraphics2D::checkFontInfo($FontInfo* info$renamed, $Font* font, $FontRenderContext* frc) {
	$var($FontInfo, info, info$renamed);
	if (info == nullptr) {
		$assign(info, $new($FontInfo));
	}
	float ptSize = $nc(font)->getSize2D();
	int32_t txFontType = 0;
	$var($AffineTransform, devAt, nullptr);
	$var($AffineTransform, textAt, nullptr);
	if (font->isTransformed()) {
		$assign(textAt, font->getTransform());
		$nc(textAt)->scale(ptSize, ptSize);
		txFontType = textAt->getType();
		$nc(info)->originX = (float)textAt->getTranslateX();
		info->originY = (float)textAt->getTranslateY();
		textAt->translate(-info->originX, -info->originY);
		if (this->transformState >= SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
			$nc(this->transform$)->getMatrix($assignField(info, devTx, $new($doubles, 4)));
			$assign(devAt, $new($AffineTransform, info->devTx));
			textAt->preConcatenate(devAt);
		} else {
			$set(info, devTx, SunGraphics2D::IDENT_MATRIX);
			$assign(devAt, SunGraphics2D::IDENT_ATX);
		}
		textAt->getMatrix($assignField(info, glyphTx, $new($doubles, 4)));
		double shearx = textAt->getShearX();
		double scaley = textAt->getScaleY();
		if (shearx != 0) {
			scaley = $Math::sqrt(shearx * shearx + scaley * scaley);
		}
		info->pixelHeight = $cast(int32_t, ($Math::abs(scaley) + 0.5));
	} else {
		txFontType = $AffineTransform::TYPE_IDENTITY;
		$nc(info)->originX = (info->originY = (float)0);
		if (this->transformState >= SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
			$nc(this->transform$)->getMatrix($assignField(info, devTx, $new($doubles, 4)));
			$assign(devAt, $new($AffineTransform, info->devTx));
			$set(info, glyphTx, $new($doubles, 4));
			for (int32_t i = 0; i < 4; ++i) {
				$nc(info->glyphTx)->set(i, $nc(info->devTx)->get(i) * ptSize);
			}
			$assign(textAt, $new($AffineTransform, info->glyphTx));
			double shearx = $nc(this->transform$)->getShearX();
			double scaley = $nc(this->transform$)->getScaleY();
			if (shearx != 0) {
				scaley = $Math::sqrt(shearx * shearx + scaley * scaley);
			}
			info->pixelHeight = $cast(int32_t, ($Math::abs(scaley * ptSize) + 0.5));
		} else {
			int32_t pszInt = $cast(int32_t, ptSize);
			if (ptSize == pszInt && pszInt >= SunGraphics2D::MINALLOCATED && pszInt < SunGraphics2D::TEXTARRSIZE) {
				$set(info, glyphTx, $nc(SunGraphics2D::textTxArr)->get(pszInt));
				$assign(textAt, $nc(SunGraphics2D::textAtArr)->get(pszInt));
				info->pixelHeight = pszInt;
			} else {
				info->pixelHeight = $cast(int32_t, (ptSize + 0.5));
			}
			if (textAt == nullptr) {
				$set(info, glyphTx, $new($doubles, {
					(double)ptSize,
					(double)0,
					(double)0,
					(double)ptSize
				}));
				$assign(textAt, $new($AffineTransform, info->glyphTx));
			}
			$set(info, devTx, SunGraphics2D::IDENT_MATRIX);
			$assign(devAt, SunGraphics2D::IDENT_ATX);
		}
	}
	$init($Double);
	$nc(info)->nonInvertibleTx = ($Math::abs($nc(textAt)->getDeterminant()) <= $Double::MIN_VALUE);
	$set(info, font2D, $FontUtilities::getFont2D(font));
	int32_t fmhint = this->fractionalMetricsHint;
	if (fmhint == $SunHints::INTVAL_FRACTIONALMETRICS_DEFAULT) {
		fmhint = $SunHints::INTVAL_FRACTIONALMETRICS_OFF;
	}
	info->lcdSubPixPos = false;
	int32_t aahint = 0;
	if (frc == nullptr) {
		aahint = this->textAntialiasHint;
	} else {
		aahint = $nc(($cast($SunHints$Value, $($nc(frc)->getAntiAliasingHint()))))->getIndex();
	}
	if (aahint == $SunHints::INTVAL_TEXT_ANTIALIAS_DEFAULT) {
		if (this->antialiasHint == $SunHints::INTVAL_ANTIALIAS_ON) {
			aahint = $SunHints::INTVAL_TEXT_ANTIALIAS_ON;
		} else {
			aahint = $SunHints::INTVAL_TEXT_ANTIALIAS_OFF;
		}
	} else if (aahint == $SunHints::INTVAL_TEXT_ANTIALIAS_GASP) {
		if ($nc(info->font2D)->useAAForPtSize(info->pixelHeight)) {
			aahint = $SunHints::INTVAL_TEXT_ANTIALIAS_ON;
		} else {
			aahint = $SunHints::INTVAL_TEXT_ANTIALIAS_OFF;
		}
	} else if (aahint >= $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HRGB) {
		if (!$nc(this->surfaceData)->canRenderLCDText(this)) {
			aahint = $SunHints::INTVAL_TEXT_ANTIALIAS_ON;
		} else {
			info->lcdRGBOrder = true;
			if (aahint == $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HBGR) {
				aahint = $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HRGB;
				info->lcdRGBOrder = false;
			} else if (aahint == $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_VBGR) {
				aahint = $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_VRGB;
				info->lcdRGBOrder = false;
			}
			info->lcdSubPixPos = fmhint == $SunHints::INTVAL_FRACTIONALMETRICS_ON && aahint == $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HRGB;
		}
	}
	if ($FontUtilities::isMacOSX14 && (aahint == $SunHints::INTVAL_TEXT_ANTIALIAS_OFF)) {
		aahint = $SunHints::INTVAL_TEXT_ANTIALIAS_ON;
	}
	info->aaHint = aahint;
	$set(info, fontStrike, $nc(info->font2D)->getStrike(font, devAt, textAt, aahint, fmhint));
	return info;
}

bool SunGraphics2D::isRotated($doubles* mtx) {
	$init(SunGraphics2D);
	if (($nc(mtx)->get(0) == mtx->get(3)) && (mtx->get(1) == 0.0) && (mtx->get(2) == 0.0) && (mtx->get(0) > 0.0)) {
		return false;
	}
	return true;
}

void SunGraphics2D::setFont($Font* font) {
	if (font != nullptr && font != this->font) {
		bool var$0 = this->textAntialiasHint == $SunHints::INTVAL_TEXT_ANTIALIAS_GASP && !$equals(this->textpipe, SunGraphics2D::invalidpipe);
		if (var$0) {
			bool var$1 = this->transformState > SunGraphics2D::TRANSFORM_ANY_TRANSLATE || font->isTransformed() || this->fontInfo == nullptr;
			var$0 = (var$1 || ($nc(this->fontInfo)->aaHint == $SunHints::INTVAL_TEXT_ANTIALIAS_ON) != $nc($($FontUtilities::getFont2D(font)))->useAAForPtSize(font->getSize()));
		}
		if (var$0) {
			$set(this, textpipe, SunGraphics2D::invalidpipe);
		}
		$set(this, font, font);
		$set(this, fontMetrics, nullptr);
		this->validFontInfo = false;
	}
}

$FontInfo* SunGraphics2D::getFontInfo() {
	if (!this->validFontInfo) {
		$set(this, fontInfo, checkFontInfo(this->fontInfo, this->font, nullptr));
		this->validFontInfo = true;
	}
	return this->fontInfo;
}

$FontInfo* SunGraphics2D::getGVFontInfo($Font* font, $FontRenderContext* frc) {
	if (this->glyphVectorFontInfo != nullptr && $nc(this->glyphVectorFontInfo)->font == font && this->glyphVectorFRC == frc) {
		return this->glyphVectorFontInfo;
	} else {
		$set(this, glyphVectorFRC, frc);
		return $assignField(this, glyphVectorFontInfo, checkFontInfo(this->glyphVectorFontInfo, font, frc));
	}
}

$FontMetrics* SunGraphics2D::getFontMetrics() {
	if (this->fontMetrics != nullptr) {
		return this->fontMetrics;
	}
	return $assignField(this, fontMetrics, $FontDesignMetrics::getMetrics(this->font, $(getFontRenderContext())));
}

$FontMetrics* SunGraphics2D::getFontMetrics($Font* font) {
	if ((this->fontMetrics != nullptr) && (font == this->font)) {
		return this->fontMetrics;
	}
	$var($FontMetrics, fm, $FontDesignMetrics::getMetrics(font, $(getFontRenderContext())));
	if (this->font == font) {
		$set(this, fontMetrics, fm);
	}
	return fm;
}

bool SunGraphics2D::hit($Rectangle* rect$renamed, $Shape* s$renamed, bool onStroke) {
	$var($Rectangle, rect, rect$renamed);
	$var($Shape, s, s$renamed);
	if (onStroke) {
		$assign(s, $nc(this->stroke)->createStrokedShape(s));
	}
	$assign(s, transformShape(s));
	if ((this->constrainX | this->constrainY) != 0) {
		$assign(rect, $new($Rectangle, rect));
		rect->translate(this->constrainX, this->constrainY);
	}
	return $nc(s)->intersects(rect);
}

$ColorModel* SunGraphics2D::getDeviceColorModel() {
	return $nc(this->surfaceData)->getColorModel();
}

$GraphicsConfiguration* SunGraphics2D::getDeviceConfiguration() {
	return $nc(this->surfaceData)->getDeviceConfiguration();
}

$SurfaceData* SunGraphics2D::getSurfaceData() {
	return this->surfaceData;
}

void SunGraphics2D::setComposite($Composite* comp) {
	if (this->composite == comp) {
		return;
	}
	int32_t newCompState = 0;
	$var($CompositeType, newCompType, nullptr);
	if ($instanceOf($AlphaComposite, comp)) {
		$var($AlphaComposite, alphacomp, $cast($AlphaComposite, comp));
		$assign(newCompType, $CompositeType::forAlphaComposite(alphacomp));
		if (newCompType == $CompositeType::SrcOverNoEa) {
			if (this->paintState == SunGraphics2D::PAINT_OPAQUECOLOR || (this->paintState > SunGraphics2D::PAINT_ALPHACOLOR && $nc(this->paint)->getTransparency() == $Transparency::OPAQUE)) {
				newCompState = SunGraphics2D::COMP_ISCOPY;
			} else {
				newCompState = SunGraphics2D::COMP_ALPHA;
			}
		} else {
			if (newCompType == $CompositeType::SrcNoEa || newCompType == $CompositeType::Src || newCompType == $CompositeType::Clear) {
				newCompState = SunGraphics2D::COMP_ISCOPY;
			} else {
				if ($nc(this->surfaceData)->getTransparency() == $Transparency::OPAQUE && newCompType == $CompositeType::SrcIn) {
					newCompState = SunGraphics2D::COMP_ISCOPY;
				} else {
					newCompState = SunGraphics2D::COMP_ALPHA;
				}
			}
		}
	} else if ($instanceOf($XORComposite, comp)) {
		newCompState = SunGraphics2D::COMP_XOR;
		$init($CompositeType);
		$assign(newCompType, $CompositeType::Xor);
	} else if (comp == nullptr) {
		$throwNew($IllegalArgumentException, "null Composite"_s);
	} else {
		$nc(this->surfaceData)->checkCustomComposite();
		newCompState = SunGraphics2D::COMP_CUSTOM;
		$init($CompositeType);
		$assign(newCompType, $CompositeType::General);
	}
	if (this->compositeState != newCompState || this->imageComp != newCompType) {
		this->compositeState = newCompState;
		$set(this, imageComp, newCompType);
		invalidatePipe();
		this->validFontInfo = false;
	}
	$set(this, composite, comp);
	if (this->paintState <= SunGraphics2D::PAINT_ALPHACOLOR) {
		validateColor();
	}
}

void SunGraphics2D::setPaint($Paint* paint) {
	if ($instanceOf($Color, paint)) {
		setColor($cast($Color, paint));
		return;
	}
	if (paint == nullptr || this->paint == paint) {
		return;
	}
	$set(this, paint, paint);
	$init($CompositeType);
	if (this->imageComp == $CompositeType::SrcOverNoEa) {
		if ($nc(paint)->getTransparency() == $Transparency::OPAQUE) {
			if (this->compositeState != SunGraphics2D::COMP_ISCOPY) {
				this->compositeState = SunGraphics2D::COMP_ISCOPY;
			}
		} else if (this->compositeState == SunGraphics2D::COMP_ISCOPY) {
			this->compositeState = SunGraphics2D::COMP_ALPHA;
		}
	}
	$Class* paintClass = $nc($of(paint))->getClass();
	$load($GradientPaint);
	if (paintClass == $GradientPaint::class$) {
		this->paintState = SunGraphics2D::PAINT_GRADIENT;
	} else {
		$load($LinearGradientPaint);
		if (paintClass == $LinearGradientPaint::class$) {
			this->paintState = SunGraphics2D::PAINT_LIN_GRADIENT;
		} else {
			$load($RadialGradientPaint);
			if (paintClass == $RadialGradientPaint::class$) {
				this->paintState = SunGraphics2D::PAINT_RAD_GRADIENT;
			} else {
				$load($TexturePaint);
				if (paintClass == $TexturePaint::class$) {
					this->paintState = SunGraphics2D::PAINT_TEXTURE;
				} else {
					this->paintState = SunGraphics2D::PAINT_CUSTOM;
				}
			}
		}
	}
	this->validFontInfo = false;
	invalidatePipe();
}

void SunGraphics2D::validateBasicStroke($BasicStroke* bs) {
	bool aa = (this->antialiasHint == $SunHints::INTVAL_ANTIALIAS_ON);
	if (this->transformState < SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		if (aa) {
			if ($nc(bs)->getLineWidth() <= SunGraphics2D::MinPenSizeAA) {
				if (bs->getDashArray() == nullptr) {
					this->strokeState = SunGraphics2D::STROKE_THIN;
				} else {
					this->strokeState = SunGraphics2D::STROKE_THINDASHED;
				}
			} else {
				this->strokeState = SunGraphics2D::STROKE_WIDE;
			}
		} else if ($equals(bs, SunGraphics2D::defaultStroke)) {
			this->strokeState = SunGraphics2D::STROKE_THIN;
		} else if ($nc(bs)->getLineWidth() <= 1.0f) {
			if (bs->getDashArray() == nullptr) {
				this->strokeState = SunGraphics2D::STROKE_THIN;
			} else {
				this->strokeState = SunGraphics2D::STROKE_THINDASHED;
			}
		} else {
			this->strokeState = SunGraphics2D::STROKE_WIDE;
		}
	} else {
		double widthsquared = 0.0;
		if (((int32_t)($nc(this->transform$)->getType() & (uint32_t)SunGraphics2D::NON_UNIFORM_SCALE_MASK)) == 0) {
			widthsquared = $Math::abs($nc(this->transform$)->getDeterminant());
		} else {
			double A = $nc(this->transform$)->getScaleX();
			double C = $nc(this->transform$)->getShearX();
			double B = $nc(this->transform$)->getShearY();
			double D = $nc(this->transform$)->getScaleY();
			double EA = A * A + B * B;
			double EB = 2 * (A * C + B * D);
			double EC = C * C + D * D;
			double hypot = $Math::sqrt(EB * EB + (EA - EC) * (EA - EC));
			widthsquared = ((EA + EC + hypot) / 2.0);
		}
		if (!$equals(bs, SunGraphics2D::defaultStroke)) {
			float var$0 = $nc(bs)->getLineWidth();
			widthsquared *= var$0 * bs->getLineWidth();
		}
		if (widthsquared <= (aa ? SunGraphics2D::MinPenSizeAASquared : SunGraphics2D::MinPenSizeSquared)) {
			if ($nc(bs)->getDashArray() == nullptr) {
				this->strokeState = SunGraphics2D::STROKE_THIN;
			} else {
				this->strokeState = SunGraphics2D::STROKE_THINDASHED;
			}
		} else {
			this->strokeState = SunGraphics2D::STROKE_WIDE;
		}
	}
}

void SunGraphics2D::setStroke($Stroke* s) {
	if (s == nullptr) {
		$throwNew($IllegalArgumentException, "null Stroke"_s);
	}
	int32_t saveStrokeState = this->strokeState;
	$set(this, stroke, s);
	if ($instanceOf($BasicStroke, s)) {
		validateBasicStroke($cast($BasicStroke, s));
	} else {
		this->strokeState = SunGraphics2D::STROKE_CUSTOM;
	}
	if (this->strokeState != saveStrokeState) {
		invalidatePipe();
	}
}

void SunGraphics2D::setRenderingHint($RenderingHints$Key* hintKey, Object$* hintValue) {
	if (!$nc(hintKey)->isCompatibleValue(hintValue)) {
		$throwNew($IllegalArgumentException, $$str({hintValue, " is not compatible with "_s, hintKey}));
	}
	if ($instanceOf($SunHints$Key, hintKey)) {
		bool stateChanged = false;
		bool textStateChanged = false;
		bool recognized = true;
		$var($SunHints$Key, sunKey, $cast($SunHints$Key, hintKey));
		int32_t newHint = 0;
		$init($SunHints);
		if ($equals(sunKey, $SunHints::KEY_TEXT_ANTIALIAS_LCD_CONTRAST)) {
			newHint = $nc(($cast($Integer, hintValue)))->intValue();
		} else {
			newHint = $nc(($cast($SunHints$Value, hintValue)))->getIndex();
		}
		switch ($nc(sunKey)->getIndex()) {
		case $SunHints::INTKEY_RENDERING:
			{
				stateChanged = (this->renderHint != newHint);
				if (stateChanged) {
					this->renderHint = newHint;
					if (this->interpolationHint == -1) {
						this->interpolationType = (newHint == $SunHints::INTVAL_RENDER_QUALITY ? $AffineTransformOp::TYPE_BILINEAR : $AffineTransformOp::TYPE_NEAREST_NEIGHBOR);
					}
				}
				break;
			}
		case $SunHints::INTKEY_ANTIALIASING:
			{
				stateChanged = (this->antialiasHint != newHint);
				this->antialiasHint = newHint;
				if (stateChanged) {
					textStateChanged = (this->textAntialiasHint == $SunHints::INTVAL_TEXT_ANTIALIAS_DEFAULT);
					if (this->strokeState != SunGraphics2D::STROKE_CUSTOM) {
						validateBasicStroke($cast($BasicStroke, this->stroke));
					}
				}
				break;
			}
		case $SunHints::INTKEY_TEXT_ANTIALIASING:
			{
				stateChanged = (this->textAntialiasHint != newHint);
				textStateChanged = stateChanged;
				this->textAntialiasHint = newHint;
				break;
			}
		case $SunHints::INTKEY_FRACTIONALMETRICS:
			{
				stateChanged = (this->fractionalMetricsHint != newHint);
				textStateChanged = stateChanged;
				this->fractionalMetricsHint = newHint;
				break;
			}
		case $SunHints::INTKEY_AATEXT_LCD_CONTRAST:
			{
				stateChanged = false;
				this->lcdTextContrast = newHint;
				break;
			}
		case $SunHints::INTKEY_INTERPOLATION:
			{
				this->interpolationHint = newHint;
				switch (newHint) {
				case $SunHints::INTVAL_INTERPOLATION_BICUBIC:
					{
						newHint = $AffineTransformOp::TYPE_BICUBIC;
						break;
					}
				case $SunHints::INTVAL_INTERPOLATION_BILINEAR:
					{
						newHint = $AffineTransformOp::TYPE_BILINEAR;
						break;
					}
				default:
					{}
				case $SunHints::INTVAL_INTERPOLATION_NEAREST_NEIGHBOR:
					{
						newHint = $AffineTransformOp::TYPE_NEAREST_NEIGHBOR;
						break;
					}
				}
				stateChanged = (this->interpolationType != newHint);
				this->interpolationType = newHint;
				break;
			}
		case $SunHints::INTKEY_STROKE_CONTROL:
			{
				stateChanged = (this->strokeHint != newHint);
				this->strokeHint = newHint;
				break;
			}
		case $SunHints::INTKEY_RESOLUTION_VARIANT:
			{
				stateChanged = (this->resolutionVariantHint != newHint);
				this->resolutionVariantHint = newHint;
				break;
			}
		default:
			{
				recognized = false;
				stateChanged = false;
				break;
			}
		}
		if (recognized) {
			if (stateChanged) {
				invalidatePipe();
				if (textStateChanged) {
					$set(this, fontMetrics, nullptr);
					$set(this, cachedFRC, nullptr);
					this->validFontInfo = false;
					$set(this, glyphVectorFontInfo, nullptr);
				}
			}
			if (this->hints != nullptr) {
				$nc(this->hints)->put(hintKey, hintValue);
			}
			return;
		}
	}
	if (this->hints == nullptr) {
		$set(this, hints, makeHints(nullptr));
	}
	$nc(this->hints)->put(hintKey, hintValue);
}

$Object* SunGraphics2D::getRenderingHint($RenderingHints$Key* hintKey) {
	if (this->hints != nullptr) {
		return $of($nc(this->hints)->get(hintKey));
	}
	if (!($instanceOf($SunHints$Key, hintKey))) {
		return $of(nullptr);
	}
	int32_t keyindex = $nc(($cast($SunHints$Key, hintKey)))->getIndex();
	switch (keyindex) {
	case $SunHints::INTKEY_RENDERING:
		{
			return $of($SunHints$Value::get($SunHints::INTKEY_RENDERING, this->renderHint));
		}
	case $SunHints::INTKEY_ANTIALIASING:
		{
			return $of($SunHints$Value::get($SunHints::INTKEY_ANTIALIASING, this->antialiasHint));
		}
	case $SunHints::INTKEY_TEXT_ANTIALIASING:
		{
			return $of($SunHints$Value::get($SunHints::INTKEY_TEXT_ANTIALIASING, this->textAntialiasHint));
		}
	case $SunHints::INTKEY_FRACTIONALMETRICS:
		{
			return $of($SunHints$Value::get($SunHints::INTKEY_FRACTIONALMETRICS, this->fractionalMetricsHint));
		}
	case $SunHints::INTKEY_AATEXT_LCD_CONTRAST:
		{
			return $of($Integer::valueOf(this->lcdTextContrast));
		}
	case $SunHints::INTKEY_INTERPOLATION:
		{
			switch (this->interpolationHint) {
			case $SunHints::INTVAL_INTERPOLATION_NEAREST_NEIGHBOR:
				{
					$init($SunHints);
					return $of($SunHints::VALUE_INTERPOLATION_NEAREST_NEIGHBOR);
				}
			case $SunHints::INTVAL_INTERPOLATION_BILINEAR:
				{
					$init($SunHints);
					return $of($SunHints::VALUE_INTERPOLATION_BILINEAR);
				}
			case $SunHints::INTVAL_INTERPOLATION_BICUBIC:
				{
					$init($SunHints);
					return $of($SunHints::VALUE_INTERPOLATION_BICUBIC);
				}
			}
			return $of(nullptr);
		}
	case $SunHints::INTKEY_STROKE_CONTROL:
		{
			return $of($SunHints$Value::get($SunHints::INTKEY_STROKE_CONTROL, this->strokeHint));
		}
	case $SunHints::INTKEY_RESOLUTION_VARIANT:
		{
			return $of($SunHints$Value::get($SunHints::INTKEY_RESOLUTION_VARIANT, this->resolutionVariantHint));
		}
	}
	return $of(nullptr);
}

void SunGraphics2D::setRenderingHints($Map* hints) {
	$set(this, hints, nullptr);
	this->renderHint = $SunHints::INTVAL_RENDER_DEFAULT;
	this->antialiasHint = $SunHints::INTVAL_ANTIALIAS_OFF;
	this->textAntialiasHint = $SunHints::INTVAL_TEXT_ANTIALIAS_DEFAULT;
	this->fractionalMetricsHint = $SunHints::INTVAL_FRACTIONALMETRICS_OFF;
	this->lcdTextContrast = SunGraphics2D::lcdTextContrastDefaultValue;
	this->interpolationHint = -1;
	this->interpolationType = $AffineTransformOp::TYPE_NEAREST_NEIGHBOR;
	bool customHintPresent = false;
	{
		$var($Iterator, i$, $nc($($nc(hints)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			{
				$init($SunHints);
				if ($equals(key, $SunHints::KEY_RENDERING) || $equals(key, $SunHints::KEY_ANTIALIASING) || $equals(key, $SunHints::KEY_TEXT_ANTIALIASING) || $equals(key, $SunHints::KEY_FRACTIONALMETRICS) || $equals(key, $SunHints::KEY_TEXT_ANTIALIAS_LCD_CONTRAST) || $equals(key, $SunHints::KEY_STROKE_CONTROL) || $equals(key, $SunHints::KEY_INTERPOLATION)) {
					setRenderingHint($cast($RenderingHints$Key, key), $(hints->get(key)));
				} else {
					customHintPresent = true;
				}
			}
		}
	}
	if (customHintPresent) {
		$set(this, hints, makeHints(hints));
	}
	invalidatePipe();
}

void SunGraphics2D::addRenderingHints($Map* hints) {
	bool customHintPresent = false;
	{
		$var($Iterator, i$, $nc($($nc(hints)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			{
				$init($SunHints);
				if ($equals(key, $SunHints::KEY_RENDERING) || $equals(key, $SunHints::KEY_ANTIALIASING) || $equals(key, $SunHints::KEY_TEXT_ANTIALIASING) || $equals(key, $SunHints::KEY_FRACTIONALMETRICS) || $equals(key, $SunHints::KEY_TEXT_ANTIALIAS_LCD_CONTRAST) || $equals(key, $SunHints::KEY_STROKE_CONTROL) || $equals(key, $SunHints::KEY_INTERPOLATION)) {
					setRenderingHint($cast($RenderingHints$Key, key), $(hints->get(key)));
				} else {
					customHintPresent = true;
				}
			}
		}
	}
	if (customHintPresent) {
		if (this->hints == nullptr) {
			$set(this, hints, makeHints(hints));
		} else {
			$nc(this->hints)->putAll(hints);
		}
	}
}

$RenderingHints* SunGraphics2D::getRenderingHints() {
	if (this->hints == nullptr) {
		return makeHints(nullptr);
	} else {
		return $cast($RenderingHints, $nc(this->hints)->clone());
	}
}

$RenderingHints* SunGraphics2D::makeHints($Map* hints) {
	$var($RenderingHints, model, $new($RenderingHints, nullptr));
	if (hints != nullptr) {
		model->putAll(hints);
	}
	$init($SunHints);
	model->put($SunHints::KEY_RENDERING, $($SunHints$Value::get($SunHints::INTKEY_RENDERING, this->renderHint)));
	model->put($SunHints::KEY_ANTIALIASING, $($SunHints$Value::get($SunHints::INTKEY_ANTIALIASING, this->antialiasHint)));
	model->put($SunHints::KEY_TEXT_ANTIALIASING, $($SunHints$Value::get($SunHints::INTKEY_TEXT_ANTIALIASING, this->textAntialiasHint)));
	model->put($SunHints::KEY_FRACTIONALMETRICS, $($SunHints$Value::get($SunHints::INTKEY_FRACTIONALMETRICS, this->fractionalMetricsHint)));
	model->put($SunHints::KEY_TEXT_ANTIALIAS_LCD_CONTRAST, $($Integer::valueOf(this->lcdTextContrast)));
	$var($Object, value, nullptr);
	switch (this->interpolationHint) {
	case $SunHints::INTVAL_INTERPOLATION_NEAREST_NEIGHBOR:
		{
			$assign(value, $SunHints::VALUE_INTERPOLATION_NEAREST_NEIGHBOR);
			break;
		}
	case $SunHints::INTVAL_INTERPOLATION_BILINEAR:
		{
			$assign(value, $SunHints::VALUE_INTERPOLATION_BILINEAR);
			break;
		}
	case $SunHints::INTVAL_INTERPOLATION_BICUBIC:
		{
			$assign(value, $SunHints::VALUE_INTERPOLATION_BICUBIC);
			break;
		}
	default:
		{
			$assign(value, nullptr);
			break;
		}
	}
	if (value != nullptr) {
		model->put($SunHints::KEY_INTERPOLATION, value);
	}
	model->put($SunHints::KEY_STROKE_CONTROL, $($SunHints$Value::get($SunHints::INTKEY_STROKE_CONTROL, this->strokeHint)));
	return model;
}

void SunGraphics2D::translate(double tx, double ty) {
	$nc(this->transform$)->translate(tx, ty);
	invalidateTransform();
}

void SunGraphics2D::rotate(double theta) {
	$nc(this->transform$)->rotate(theta);
	invalidateTransform();
}

void SunGraphics2D::rotate(double theta, double x, double y) {
	$nc(this->transform$)->rotate(theta, x, y);
	invalidateTransform();
}

void SunGraphics2D::scale(double sx, double sy) {
	$nc(this->transform$)->scale(sx, sy);
	invalidateTransform();
}

void SunGraphics2D::shear(double shx, double shy) {
	$nc(this->transform$)->shear(shx, shy);
	invalidateTransform();
}

void SunGraphics2D::transform($AffineTransform* xform) {
	$nc(this->transform$)->concatenate(xform);
	invalidateTransform();
}

void SunGraphics2D::translate(int32_t x, int32_t y) {
	$nc(this->transform$)->translate((double)x, (double)y);
	if (this->transformState <= SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
		this->transX += x;
		this->transY += y;
		this->transformState = (((this->transX | this->transY) == 0) ? SunGraphics2D::TRANSFORM_ISIDENT : SunGraphics2D::TRANSFORM_INT_TRANSLATE);
	} else {
		invalidateTransform();
	}
}

void SunGraphics2D::setTransform($AffineTransform* Tx) {
	if ((this->constrainX | this->constrainY) == 0) {
		$nc(this->transform$)->setTransform(Tx);
	} else {
		$nc(this->transform$)->setToTranslation((double)this->constrainX, (double)this->constrainY);
		$nc(this->transform$)->concatenate(Tx);
	}
	invalidateTransform();
}

void SunGraphics2D::invalidateTransform() {
	int32_t type = $nc(this->transform$)->getType();
	int32_t origTransformState = this->transformState;
	if (type == $AffineTransform::TYPE_IDENTITY) {
		this->transformState = SunGraphics2D::TRANSFORM_ISIDENT;
		this->transX = (this->transY = 0);
	} else if (type == $AffineTransform::TYPE_TRANSLATION) {
		double dtx = $nc(this->transform$)->getTranslateX();
		double dty = $nc(this->transform$)->getTranslateY();
		this->transX = $cast(int32_t, $Math::floor(dtx + 0.5));
		this->transY = $cast(int32_t, $Math::floor(dty + 0.5));
		if (dtx == this->transX && dty == this->transY) {
			this->transformState = SunGraphics2D::TRANSFORM_INT_TRANSLATE;
		} else {
			this->transformState = SunGraphics2D::TRANSFORM_ANY_TRANSLATE;
		}
	} else if (((int32_t)(type & (uint32_t)(($AffineTransform::TYPE_FLIP | $AffineTransform::TYPE_MASK_ROTATION) | $AffineTransform::TYPE_GENERAL_TRANSFORM))) == 0) {
		this->transformState = SunGraphics2D::TRANSFORM_TRANSLATESCALE;
		this->transX = (this->transY = 0);
	} else {
		this->transformState = SunGraphics2D::TRANSFORM_GENERIC;
		this->transX = (this->transY = 0);
	}
	if (this->transformState >= SunGraphics2D::TRANSFORM_TRANSLATESCALE || origTransformState >= SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		$set(this, cachedFRC, nullptr);
		this->validFontInfo = false;
		$set(this, fontMetrics, nullptr);
		$set(this, glyphVectorFontInfo, nullptr);
		if (this->transformState != origTransformState) {
			invalidatePipe();
		}
	}
	if (this->strokeState != SunGraphics2D::STROKE_CUSTOM) {
		validateBasicStroke($cast($BasicStroke, this->stroke));
	}
}

$AffineTransform* SunGraphics2D::getTransform() {
	if ((this->constrainX | this->constrainY) == 0) {
		return $new($AffineTransform, this->transform$);
	}
	$var($AffineTransform, tx, $AffineTransform::getTranslateInstance((double)(-this->constrainX), (double)(-this->constrainY)));
	$nc(tx)->concatenate(this->transform$);
	return tx;
}

$AffineTransform* SunGraphics2D::cloneTransform() {
	return $new($AffineTransform, this->transform$);
}

$Paint* SunGraphics2D::getPaint() {
	return this->paint;
}

$Composite* SunGraphics2D::getComposite() {
	return this->composite;
}

$Color* SunGraphics2D::getColor() {
	return this->foregroundColor;
}

void SunGraphics2D::validateColor() {
	int32_t eargb = 0;
	$init($CompositeType);
	if (this->imageComp == $CompositeType::Clear) {
		eargb = 0;
	} else {
		eargb = $nc(this->foregroundColor)->getRGB();
		if (this->compositeState <= SunGraphics2D::COMP_ALPHA && this->imageComp != $CompositeType::SrcNoEa && this->imageComp != $CompositeType::SrcOverNoEa) {
			$var($AlphaComposite, alphacomp, $cast($AlphaComposite, this->composite));
			int32_t a = $Math::round($nc(alphacomp)->getAlpha() * ((int32_t)((uint32_t)eargb >> 24)));
			eargb = ((int32_t)(eargb & (uint32_t)0x00FFFFFF)) | (a << 24);
		}
	}
	this->eargb = eargb;
	this->pixel = $nc(this->surfaceData)->pixelFor(eargb);
}

void SunGraphics2D::setColor($Color* color) {
	if (color == nullptr || $equals(color, this->paint)) {
		return;
	}
	$set(this, paint, ($assignField(this, foregroundColor, color)));
	validateColor();
	if ((this->eargb >> 24) == -1) {
		if (this->paintState == SunGraphics2D::PAINT_OPAQUECOLOR) {
			return;
		}
		this->paintState = SunGraphics2D::PAINT_OPAQUECOLOR;
		$init($CompositeType);
		if (this->imageComp == $CompositeType::SrcOverNoEa) {
			this->compositeState = SunGraphics2D::COMP_ISCOPY;
		}
	} else {
		if (this->paintState == SunGraphics2D::PAINT_ALPHACOLOR) {
			return;
		}
		this->paintState = SunGraphics2D::PAINT_ALPHACOLOR;
		$init($CompositeType);
		if (this->imageComp == $CompositeType::SrcOverNoEa) {
			this->compositeState = SunGraphics2D::COMP_ALPHA;
		}
	}
	this->validFontInfo = false;
	invalidatePipe();
}

void SunGraphics2D::setBackground($Color* color) {
	$set(this, backgroundColor, color);
}

$Color* SunGraphics2D::getBackground() {
	return this->backgroundColor;
}

$Stroke* SunGraphics2D::getStroke() {
	return this->stroke;
}

$Rectangle* SunGraphics2D::getClipBounds() {
	if (this->clipState == SunGraphics2D::CLIP_DEVICE) {
		return nullptr;
	}
	return getClipBounds($$new($Rectangle));
}

$Rectangle* SunGraphics2D::getClipBounds($Rectangle* r) {
	if (this->clipState != SunGraphics2D::CLIP_DEVICE) {
		if (this->transformState <= SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
			if ($instanceOf($Rectangle, this->usrClip)) {
				$nc(r)->setBounds($cast($Rectangle, this->usrClip));
			} else {
				$nc(r)->setFrame($($nc(this->usrClip)->getBounds2D()));
			}
			$nc(r)->translate(-this->transX, -this->transY);
		} else {
			$nc(r)->setFrame($($nc($(getClip()))->getBounds2D()));
		}
	} else if (r == nullptr) {
		$throwNew($NullPointerException, "null rectangle parameter"_s);
	}
	return r;
}

bool SunGraphics2D::hitClip(int32_t x, int32_t y, int32_t width, int32_t height) {
	if (width <= 0 || height <= 0) {
		return false;
	}
	if (this->transformState > SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
		$var($doubles, d, $new($doubles, {
			(double)x,
			(double)y,
			(double)(x + width),
			(double)y,
			(double)x,
			(double)(y + height),
			(double)(x + width),
			(double)(y + height)
		}));
		$nc(this->transform$)->transform(d, 0, d, 0, 4);
		double var$0 = $Math::min(d->get(0), d->get(2));
		x = $cast(int32_t, $Math::floor($Math::min(var$0, $Math::min(d->get(4), d->get(6)))));
		double var$1 = $Math::min(d->get(1), d->get(3));
		y = $cast(int32_t, $Math::floor($Math::min(var$1, $Math::min(d->get(5), d->get(7)))));
		double var$2 = $Math::max(d->get(0), d->get(2));
		width = $cast(int32_t, $Math::ceil($Math::max(var$2, $Math::max(d->get(4), d->get(6)))));
		double var$3 = $Math::max(d->get(1), d->get(3));
		height = $cast(int32_t, $Math::ceil($Math::max(var$3, $Math::max(d->get(5), d->get(7)))));
	} else {
		x += this->transX;
		y += this->transY;
		width += x;
		height += y;
	}
	try {
		if (!$nc($(getCompClip()))->intersectsQuickCheckXYXY(x, y, width, height)) {
			return false;
		}
	} catch ($InvalidPipeException&) {
		$var($InvalidPipeException, e, $catch());
		return false;
	}
	return true;
}

void SunGraphics2D::validateCompClip() {
	int32_t origClipState = this->clipState;
	if (this->usrClip == nullptr) {
		this->clipState = SunGraphics2D::CLIP_DEVICE;
		$set(this, clipRegion, this->devClip);
	} else if ($instanceOf($Rectangle2D, this->usrClip)) {
		this->clipState = SunGraphics2D::CLIP_RECTANGULAR;
		$set(this, clipRegion, $nc(this->devClip)->getIntersection($cast($Rectangle2D, this->usrClip)));
	} else {
		$var($PathIterator, cpi, $nc(this->usrClip)->getPathIterator(nullptr));
		$var($ints, box, $new($ints, 4));
		$var($ShapeSpanIterator, sr, $LoopPipe::getFillSSI(this));
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(sr)->setOutputArea(this->devClip);
				sr->appendPath(cpi);
				sr->getPathBox(box);
				$var($Region, r, $Region::getInstance(box, static_cast<$SpanIterator*>(sr)));
				$set(this, clipRegion, r);
				this->clipState = $nc(r)->isRectangular() ? SunGraphics2D::CLIP_RECTANGULAR : SunGraphics2D::CLIP_SHAPE;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(sr)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (origClipState != this->clipState && (this->clipState == SunGraphics2D::CLIP_SHAPE || origClipState == SunGraphics2D::CLIP_SHAPE)) {
		this->validFontInfo = false;
		invalidatePipe();
	}
}

$Shape* SunGraphics2D::transformShape($Shape* s) {
	if (s == nullptr) {
		return nullptr;
	}
	if (this->transformState > SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
		return transformShape(this->transform$, s);
	} else {
		return transformShape(this->transX, this->transY, s);
	}
}

$Shape* SunGraphics2D::untransformShape($Shape* s) {
	if (s == nullptr) {
		return nullptr;
	}
	if (this->transformState > SunGraphics2D::TRANSFORM_INT_TRANSLATE) {
		try {
			return transformShape($($nc(this->transform$)->createInverse()), s);
		} catch ($NoninvertibleTransformException&) {
			$var($NoninvertibleTransformException, e, $catch());
			return nullptr;
		}
	} else {
		return transformShape(-this->transX, -this->transY, s);
	}
}

$Shape* SunGraphics2D::transformShape(int32_t tx, int32_t ty, $Shape* s) {
	$init(SunGraphics2D);
	if (s == nullptr) {
		return nullptr;
	}
	if ($instanceOf($Rectangle, s)) {
		$var($Rectangle, r, $nc(s)->getBounds());
		$nc(r)->translate(tx, ty);
		return r;
	}
	if ($instanceOf($Rectangle2D, s)) {
		$var($Rectangle2D, rect, $cast($Rectangle2D, s));
		double var$0 = $nc(rect)->getX() + tx;
		double var$1 = rect->getY() + ty;
		double var$2 = rect->getWidth();
		return $new($Rectangle2D$Double, var$0, var$1, var$2, rect->getHeight());
	}
	if (tx == 0 && ty == 0) {
		return cloneShape(s);
	}
	$var($AffineTransform, mat, $AffineTransform::getTranslateInstance((double)tx, (double)ty));
	return $nc(mat)->createTransformedShape(s);
}

$Shape* SunGraphics2D::transformShape($AffineTransform* tx, $Shape* clip) {
	$init(SunGraphics2D);
	if (clip == nullptr) {
		return nullptr;
	}
	if ($instanceOf($Rectangle2D, clip) && ((int32_t)($nc(tx)->getType() & (uint32_t)SunGraphics2D::NON_RECTILINEAR_TRANSFORM_MASK)) == 0) {
		$var($Rectangle2D, rect, $cast($Rectangle2D, clip));
		$var($doubles, matrix, $new($doubles, 4));
		matrix->set(0, $nc(rect)->getX());
		matrix->set(1, rect->getY());
		matrix->set(2, matrix->get(0) + rect->getWidth());
		matrix->set(3, matrix->get(1) + rect->getHeight());
		tx->transform(matrix, 0, matrix, 0, 2);
		fixRectangleOrientation(matrix, rect);
		return $new($Rectangle2D$Double, matrix->get(0), matrix->get(1), matrix->get(2) - matrix->get(0), matrix->get(3) - matrix->get(1));
	}
	if ($nc(tx)->isIdentity()) {
		return cloneShape(clip);
	}
	return $nc(tx)->createTransformedShape(clip);
}

void SunGraphics2D::fixRectangleOrientation($doubles* m, $Rectangle2D* clip) {
	$init(SunGraphics2D);
	if ($nc(clip)->getWidth() > 0 != ($nc(m)->get(2) - m->get(0) > 0)) {
		double t = m->get(0);
		m->set(0, m->get(2));
		m->set(2, t);
	}
	if ($nc(clip)->getHeight() > 0 != ($nc(m)->get(3) - m->get(1) > 0)) {
		double t = m->get(1);
		m->set(1, m->get(3));
		m->set(3, t);
	}
}

void SunGraphics2D::clipRect(int32_t x, int32_t y, int32_t w, int32_t h) {
	clip($$new($Rectangle, x, y, w, h));
}

void SunGraphics2D::setClip(int32_t x, int32_t y, int32_t w, int32_t h) {
	setClip($$new($Rectangle, x, y, w, h));
}

$Shape* SunGraphics2D::getClip() {
	return untransformShape(this->usrClip);
}

void SunGraphics2D::setClip($Shape* sh) {
	$set(this, usrClip, transformShape(sh));
	validateCompClip();
}

void SunGraphics2D::clip($Shape* s$renamed) {
	$var($Shape, s, s$renamed);
	$assign(s, transformShape(s));
	if (this->usrClip != nullptr) {
		$assign(s, intersectShapes(this->usrClip, s, true, true));
	}
	$set(this, usrClip, s);
	validateCompClip();
}

void SunGraphics2D::setPaintMode() {
	$init($AlphaComposite);
	setComposite($AlphaComposite::SrcOver);
}

void SunGraphics2D::setXORMode($Color* c) {
	if (c == nullptr) {
		$throwNew($IllegalArgumentException, "null XORColor"_s);
	}
	setComposite($$new($XORComposite, c, this->surfaceData));
}

void SunGraphics2D::copyArea(int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				doCopyArea(x, y, w, h, dx, dy);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					doCopyArea(x, y, w, h, dx, dy);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::doCopyArea(int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	if (w <= 0 || h <= 0) {
		return;
	}
	if (this->transformState == SunGraphics2D::TRANSFORM_ISIDENT) {
	} else if (this->transformState <= SunGraphics2D::TRANSFORM_ANY_TRANSLATE) {
		x += this->transX;
		y += this->transY;
	} else if (this->transformState == SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		$var($doubles, coords, $new($doubles, {
			(double)x,
			(double)y,
			(double)(x + w),
			(double)(y + h),
			(double)(x + dx),
			(double)(y + dy)
		}));
		$nc(this->transform$)->transform(coords, 0, coords, 0, 3);
		x = $cast(int32_t, $Math::ceil(coords->get(0) - 0.5));
		y = $cast(int32_t, $Math::ceil(coords->get(1) - 0.5));
		w = ($cast(int32_t, $Math::ceil(coords->get(2) - 0.5))) - x;
		h = ($cast(int32_t, $Math::ceil(coords->get(3) - 0.5))) - y;
		dx = ($cast(int32_t, $Math::ceil(coords->get(4) - 0.5))) - x;
		dy = ($cast(int32_t, $Math::ceil(coords->get(5) - 0.5))) - y;
		if (w < 0) {
			w = -w;
			x -= w;
		}
		if (h < 0) {
			h = -h;
			y -= h;
		}
	} else {
		$throwNew($InternalError, "transformed copyArea not implemented yet"_s);
	}
	$var($SurfaceData, theData, this->surfaceData);
	if ($nc(theData)->copyArea(this, x, y, w, h, dx, dy)) {
		return;
	}
	$var($Region, clip, getCompClip());
	$var($Composite, comp, this->composite);
	if (this->lastCAcomp != comp) {
		$var($SurfaceType, dsttype, $nc(theData)->getSurfaceType());
		$var($CompositeType, comptype, this->imageComp);
		$init($CompositeType);
		bool var$0 = $nc($CompositeType::SrcOverNoEa)->equals(comptype);
		if (var$0 && theData->getTransparency() == $Transparency::OPAQUE) {
			$assign(comptype, $CompositeType::SrcNoEa);
		}
		$set(this, lastCAblit, $Blit::locate(dsttype, comptype, dsttype));
		$set(this, lastCAcomp, comp);
	}
	$var($Blit, ob, this->lastCAblit);
	if (dy == 0 && dx > 0 && dx < w) {
		while (w > 0) {
			int32_t partW = $Math::min(w, dx);
			w -= partW;
			int32_t sx = x + w;
			$nc(ob)->Blit$(theData, theData, comp, clip, sx, y, sx + dx, y + dy, partW, h);
		}
		return;
	}
	if (dy > 0 && dy < h && dx > -w && dx < w) {
		while (h > 0) {
			int32_t partH = $Math::min(h, dy);
			h -= partH;
			int32_t sy = y + h;
			$nc(ob)->Blit$(theData, theData, comp, clip, x, sy, x + dx, sy + dy, w, partH);
		}
		return;
	}
	$nc(ob)->Blit$(theData, theData, comp, clip, x, y, x + dx, y + dy, w, h);
}

void SunGraphics2D::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->drawpipe)->drawLine(this, x1, y1, x2, y2);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->drawpipe)->drawLine(this, x1, y1, x2, y2);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::drawRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->drawpipe)->drawRoundRect(this, x, y, w, h, arcW, arcH);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->drawpipe)->drawRoundRect(this, x, y, w, h, arcW, arcH);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::fillRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->fillpipe)->fillRoundRect(this, x, y, w, h, arcW, arcH);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->fillpipe)->fillRoundRect(this, x, y, w, h, arcW, arcH);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::drawOval(int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->drawpipe)->drawOval(this, x, y, w, h);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->drawpipe)->drawOval(this, x, y, w, h);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::fillOval(int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->fillpipe)->fillOval(this, x, y, w, h);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->fillpipe)->fillOval(this, x, y, w, h);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::drawArc(int32_t x, int32_t y, int32_t w, int32_t h, int32_t startAngl, int32_t arcAngl) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->drawpipe)->drawArc(this, x, y, w, h, startAngl, arcAngl);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->drawpipe)->drawArc(this, x, y, w, h, startAngl, arcAngl);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::fillArc(int32_t x, int32_t y, int32_t w, int32_t h, int32_t startAngl, int32_t arcAngl) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->fillpipe)->fillArc(this, x, y, w, h, startAngl, arcAngl);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->fillpipe)->fillArc(this, x, y, w, h, startAngl, arcAngl);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->drawpipe)->drawPolyline(this, xPoints, yPoints, nPoints);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->drawpipe)->drawPolyline(this, xPoints, yPoints, nPoints);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->drawpipe)->drawPolygon(this, xPoints, yPoints, nPoints);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->drawpipe)->drawPolygon(this, xPoints, yPoints, nPoints);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->fillpipe)->fillPolygon(this, xPoints, yPoints, nPoints);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->fillpipe)->fillPolygon(this, xPoints, yPoints, nPoints);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::drawRect(int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->drawpipe)->drawRect(this, x, y, w, h);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->drawpipe)->drawRect(this, x, y, w, h);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::fillRect(int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->fillpipe)->fillRect(this, x, y, w, h);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->fillpipe)->fillRect(this, x, y, w, h);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::revalidateAll() {
	{
		$set(this, surfaceData, $nc(this->surfaceData)->getReplacement());
		if (this->surfaceData == nullptr) {
			$init($NullSurfaceData);
			$set(this, surfaceData, $NullSurfaceData::theInstance);
		}
		invalidatePipe();
		setDevClip($($nc(this->surfaceData)->getBounds()));
		if (this->paintState <= SunGraphics2D::PAINT_ALPHACOLOR) {
			validateColor();
		}
		if ($instanceOf($XORComposite, this->composite)) {
			$var($Color, c, $nc(($cast($XORComposite, this->composite)))->getXorColor());
			setComposite($$new($XORComposite, c, this->surfaceData));
		}
		validatePipe();
	}
}

void SunGraphics2D::clearRect(int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Composite, c, this->composite);
	$var($Paint, p, this->paint);
	$init($AlphaComposite);
	setComposite($AlphaComposite::Src);
	setColor($(getBackground()));
	fillRect(x, y, w, h);
	setPaint(p);
	setComposite(c);
}

void SunGraphics2D::draw($Shape* s) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->shapepipe)->draw(this, s);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->shapepipe)->draw(this, s);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::fill($Shape* s) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->shapepipe)->fill(this, s);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->shapepipe)->fill(this, s);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SunGraphics2D::isIntegerTranslation($AffineTransform* xform) {
	$init(SunGraphics2D);
	if ($nc(xform)->isIdentity()) {
		return true;
	}
	if ($nc(xform)->getType() == $AffineTransform::TYPE_TRANSLATION) {
		double tx = xform->getTranslateX();
		double ty = xform->getTranslateY();
		return (tx == $cast(int32_t, tx) && ty == $cast(int32_t, ty));
	}
	return false;
}

int32_t SunGraphics2D::getTileIndex(int32_t p, int32_t tileGridOffset, int32_t tileSize) {
	$init(SunGraphics2D);
	p -= tileGridOffset;
	if (p < 0) {
		p += 1 - tileSize;
	}
	return $div(p, tileSize);
}

$Rectangle* SunGraphics2D::getImageRegion($RenderedImage* img, $Region* compClip, $AffineTransform* transform, $AffineTransform* xform, int32_t padX, int32_t padY) {
	$init(SunGraphics2D);
	int32_t var$0 = $nc(img)->getMinX();
	int32_t var$1 = img->getMinY();
	int32_t var$2 = img->getWidth();
	$var($Rectangle, imageRect, $new($Rectangle, var$0, var$1, var$2, img->getHeight()));
	$var($Rectangle, result, nullptr);
	try {
		$var($doubles, p, $new($doubles, 8));
		p->set(0, p->set(2, (double)$nc(compClip)->getLoX()));
		p->set(4, p->set(6, (double)compClip->getHiX()));
		p->set(1, p->set(5, (double)compClip->getLoY()));
		p->set(3, p->set(7, (double)compClip->getHiY()));
		$nc(transform)->inverseTransform(p, 0, p, 0, 4);
		$nc(xform)->inverseTransform(p, 0, p, 0, 4);
		double x0 = 0.0;
		double x1 = 0.0;
		double y0 = 0.0;
		double y1 = 0.0;
		x0 = (x1 = p->get(0));
		y0 = (y1 = p->get(1));
		for (int32_t i = 2; i < 8;) {
			double pt = p->get(i++);
			if (pt < x0) {
				x0 = pt;
			} else if (pt > x1) {
				x1 = pt;
			}
			pt = p->get(i++);
			if (pt < y0) {
				y0 = pt;
			} else if (pt > y1) {
				y1 = pt;
			}
		}
		int32_t x = $cast(int32_t, x0) - padX;
		int32_t w = $cast(int32_t, (x1 - x0 + 2 * padX));
		int32_t y = $cast(int32_t, y0) - padY;
		int32_t h = $cast(int32_t, (y1 - y0 + 2 * padY));
		$var($Rectangle, clipRect, $new($Rectangle, x, y, w, h));
		$assign(result, clipRect->intersection(imageRect));
	} catch ($NoninvertibleTransformException&) {
		$var($NoninvertibleTransformException, nte, $catch());
		$assign(result, imageRect);
	}
	return result;
}

void SunGraphics2D::drawRenderedImage($RenderedImage* img, $AffineTransform* xform) {
	if (img == nullptr) {
		return;
	}
	if ($instanceOf($BufferedImage, img)) {
		$var($BufferedImage, bufImg, $cast($BufferedImage, img));
		drawImage(bufImg, xform, nullptr);
		return;
	}
	bool isIntegerTranslate = (this->transformState <= SunGraphics2D::TRANSFORM_INT_TRANSLATE) && isIntegerTranslation(xform);
	int32_t pad = isIntegerTranslate ? 0 : 3;
	$var($Region, clip, nullptr);
	try {
		$assign(clip, getCompClip());
	} catch ($InvalidPipeException&) {
		$var($InvalidPipeException, e, $catch());
		return;
	}
	$var($Rectangle, region, getImageRegion(img, clip, this->transform$, xform, pad, pad));
	if ($nc(region)->width <= 0 || $nc(region)->height <= 0) {
		return;
	}
	if (isIntegerTranslate) {
		$var($RenderedImage, var$0, img);
		$var($Rectangle, var$1, region);
		int32_t var$2 = $cast(int32_t, $nc(xform)->getTranslateX());
		drawTranslatedRenderedImage(var$0, var$1, var$2, $cast(int32_t, xform->getTranslateY()));
		return;
	}
	$var($Raster, raster, $nc(img)->getData(region));
	$var($SampleModel, var$3, $nc(raster)->getSampleModel());
	$var($WritableRaster, wRaster, $Raster::createWritableRaster(var$3, $(raster->getDataBuffer()), nullptr));
	int32_t minX = $nc(raster)->getMinX();
	int32_t minY = raster->getMinY();
	int32_t width = raster->getWidth();
	int32_t height = raster->getHeight();
	int32_t px = minX - raster->getSampleModelTranslateX();
	int32_t py = minY - raster->getSampleModelTranslateY();
	bool var$4 = px != 0 || py != 0 || width != $nc(wRaster)->getWidth();
	if (var$4 || height != $nc(wRaster)->getHeight()) {
		$assign(wRaster, wRaster->createWritableChild(px, py, width, height, 0, 0, nullptr));
	}
	$var($AffineTransform, transXform, $cast($AffineTransform, $nc(xform)->clone()));
	$nc(transXform)->translate((double)minX, (double)minY);
	$var($ColorModel, cm, img->getColorModel());
	$var($BufferedImage, bufImg, $new($BufferedImage, cm, wRaster, $nc(cm)->isAlphaPremultiplied(), ($Hashtable*)nullptr));
	drawImage(bufImg, transXform, nullptr);
}

bool SunGraphics2D::clipTo($Rectangle* destRect, $Rectangle* clip) {
	int32_t x1 = $Math::max($nc(destRect)->x, $nc(clip)->x);
	int32_t x2 = $Math::min($nc(destRect)->x + destRect->width, $nc(clip)->x + clip->width);
	int32_t y1 = $Math::max($nc(destRect)->y, $nc(clip)->y);
	int32_t y2 = $Math::min($nc(destRect)->y + destRect->height, $nc(clip)->y + clip->height);
	if (((x2 - x1) < 0) || ((y2 - y1) < 0)) {
		$nc(destRect)->width = -1;
		destRect->height = -1;
		return false;
	} else {
		$nc(destRect)->x = x1;
		destRect->y = y1;
		destRect->width = x2 - x1;
		destRect->height = y2 - y1;
		return true;
	}
}

void SunGraphics2D::drawTranslatedRenderedImage($RenderedImage* img, $Rectangle* region, int32_t i2uTransX, int32_t i2uTransY) {
	int32_t tileGridXOffset = $nc(img)->getTileGridXOffset();
	int32_t tileGridYOffset = img->getTileGridYOffset();
	int32_t tileWidth = img->getTileWidth();
	int32_t tileHeight = img->getTileHeight();
	int32_t minTileX = getTileIndex($nc(region)->x, tileGridXOffset, tileWidth);
	int32_t minTileY = getTileIndex($nc(region)->y, tileGridYOffset, tileHeight);
	int32_t maxTileX = getTileIndex($nc(region)->x + region->width - 1, tileGridXOffset, tileWidth);
	int32_t maxTileY = getTileIndex($nc(region)->y + region->height - 1, tileGridYOffset, tileHeight);
	$var($ColorModel, colorModel, img->getColorModel());
	$var($Rectangle, tileRect, $new($Rectangle));
	for (int32_t ty = minTileY; ty <= maxTileY; ++ty) {
		for (int32_t tx = minTileX; tx <= maxTileX; ++tx) {
			$var($Raster, raster, img->getTile(tx, ty));
			tileRect->x = tx * tileWidth + tileGridXOffset;
			tileRect->y = ty * tileHeight + tileGridYOffset;
			tileRect->width = tileWidth;
			tileRect->height = tileHeight;
			clipTo(tileRect, region);
			$var($WritableRaster, wRaster, nullptr);
			if ($instanceOf($WritableRaster, raster)) {
				$assign(wRaster, $cast($WritableRaster, raster));
			} else {
				$var($SampleModel, var$0, $nc(raster)->getSampleModel());
				$assign(wRaster, $Raster::createWritableRaster(var$0, $(raster->getDataBuffer()), nullptr));
			}
			$assign(wRaster, $nc(wRaster)->createWritableChild(tileRect->x, tileRect->y, tileRect->width, tileRect->height, 0, 0, nullptr));
			$var($BufferedImage, bufImg, $new($BufferedImage, colorModel, wRaster, $nc(colorModel)->isAlphaPremultiplied(), ($Hashtable*)nullptr));
			copyImage(bufImg, tileRect->x + i2uTransX, tileRect->y + i2uTransY, 0, 0, tileRect->width, tileRect->height, nullptr, nullptr);
		}
	}
}

void SunGraphics2D::drawRenderableImage($RenderableImage* img, $AffineTransform* xform) {
	if (img == nullptr) {
		return;
	}
	$var($AffineTransform, pipeTransform, this->transform$);
	$var($AffineTransform, concatTransform, $new($AffineTransform, xform));
	concatTransform->concatenate(pipeTransform);
	$var($AffineTransform, reverseTransform, nullptr);
	$var($RenderContext, rc, $new($RenderContext, concatTransform));
	try {
		$assign(reverseTransform, $nc(pipeTransform)->createInverse());
	} catch ($NoninvertibleTransformException&) {
		$var($NoninvertibleTransformException, nte, $catch());
		$assign(rc, $new($RenderContext, pipeTransform));
		$assign(reverseTransform, $new($AffineTransform));
	}
	$var($RenderedImage, rendering, $nc(img)->createRendering(rc));
	drawRenderedImage(rendering, reverseTransform);
}

$Rectangle* SunGraphics2D::transformBounds($Rectangle* rect, $AffineTransform* tx) {
	if ($nc(tx)->isIdentity()) {
		return rect;
	}
	$var($Shape, s, transformShape(tx, rect));
	return $nc(s)->getBounds();
}

void SunGraphics2D::drawString($String* str, int32_t x, int32_t y) {
	if (str == nullptr) {
		$throwNew($NullPointerException, "String is null"_s);
	}
	if ($nc(this->font)->hasLayoutAttributes()) {
		if ($nc(str)->length() == 0) {
			return;
		}
		$$new($TextLayout, str, this->font, $(getFontRenderContext()))->draw(this, (float)x, (float)y);
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->textpipe)->drawString(this, str, (double)x, (double)y);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->textpipe)->drawString(this, str, (double)x, (double)y);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::drawString($String* str, float x, float y) {
	if (str == nullptr) {
		$throwNew($NullPointerException, "String is null"_s);
	}
	if ($nc(this->font)->hasLayoutAttributes()) {
		if ($nc(str)->length() == 0) {
			return;
		}
		$$new($TextLayout, str, this->font, $(getFontRenderContext()))->draw(this, x, y);
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->textpipe)->drawString(this, str, x, y);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->textpipe)->drawString(this, str, x, y);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::drawString($AttributedCharacterIterator* iterator, int32_t x, int32_t y) {
	if (iterator == nullptr) {
		$throwNew($NullPointerException, "AttributedCharacterIterator is null"_s);
	}
	int32_t var$0 = $nc(iterator)->getBeginIndex();
	if (var$0 == iterator->getEndIndex()) {
		return;
	}
	$var($TextLayout, tl, $new($TextLayout, iterator, $(getFontRenderContext())));
	tl->draw(this, (float)x, (float)y);
}

void SunGraphics2D::drawString($AttributedCharacterIterator* iterator, float x, float y) {
	if (iterator == nullptr) {
		$throwNew($NullPointerException, "AttributedCharacterIterator is null"_s);
	}
	int32_t var$0 = $nc(iterator)->getBeginIndex();
	if (var$0 == iterator->getEndIndex()) {
		return;
	}
	$var($TextLayout, tl, $new($TextLayout, iterator, $(getFontRenderContext())));
	tl->draw(this, x, y);
}

void SunGraphics2D::drawGlyphVector($GlyphVector* gv, float x, float y) {
	if (gv == nullptr) {
		$throwNew($NullPointerException, "GlyphVector is null"_s);
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->textpipe)->drawGlyphVector(this, gv, x, y);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->textpipe)->drawGlyphVector(this, gv, x, y);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SunGraphics2D::drawChars($chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	if (data == nullptr) {
		$throwNew($NullPointerException, "char data is null"_s);
	}
	if (offset < 0 || length < 0 || offset + length < length || offset + length > $nc(data)->length) {
		$throwNew($ArrayIndexOutOfBoundsException, "bad offset/length"_s);
	}
	if ($nc(this->font)->hasLayoutAttributes()) {
		if ($nc(data)->length == 0) {
			return;
		}
		$var($String, var$0, $new($String, data, offset, length));
		$var($Font, var$1, this->font);
		$$new($TextLayout, var$0, var$1, $(getFontRenderContext()))->draw(this, (float)x, (float)y);
		return;
	}
	{
		$var($Throwable, var$2, nullptr);
		try {
			try {
				$nc(this->textpipe)->drawChars(this, data, offset, length, x, y);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->textpipe)->drawChars(this, data, offset, length, x, y);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$2, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
}

void SunGraphics2D::drawBytes($bytes* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	if (data == nullptr) {
		$throwNew($NullPointerException, "byte data is null"_s);
	}
	if (offset < 0 || length < 0 || offset + length < length || offset + length > $nc(data)->length) {
		$throwNew($ArrayIndexOutOfBoundsException, "bad offset/length"_s);
	}
	$var($chars, chData, $new($chars, length));
	for (int32_t i = length; i-- > 0;) {
		chData->set(i, (char16_t)((int32_t)($nc(data)->get(i + offset) & (uint32_t)255)));
	}
	if ($nc(this->font)->hasLayoutAttributes()) {
		if ($nc(data)->length == 0) {
			return;
		}
		$var($String, var$0, $new($String, chData));
		$var($Font, var$1, this->font);
		$$new($TextLayout, var$0, var$1, $(getFontRenderContext()))->draw(this, (float)x, (float)y);
		return;
	}
	{
		$var($Throwable, var$2, nullptr);
		try {
			try {
				$nc(this->textpipe)->drawChars(this, chData, 0, length, x, y);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->textpipe)->drawChars(this, chData, 0, length, x, y);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$2, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
}

$Boolean* SunGraphics2D::drawHiDPIImage($Image* img$renamed, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgcolor, $ImageObserver* observer$renamed, $AffineTransform* xform) {
	$var($ImageObserver, observer, observer$renamed);
	$var($Image, img, img$renamed);
	try {
		if ($instanceOf($VolatileImage, img)) {
			$var($SurfaceData, sd, $nc($($SurfaceManager::getManager(img)))->getPrimarySurfaceData());
			double scaleX = $nc(sd)->getDefaultScaleX();
			double scaleY = sd->getDefaultScaleY();
			if (scaleX == 1 && scaleY == 1) {
				return nullptr;
			}
			sx1 = $Region::clipRound(sx1 * scaleX);
			sx2 = $Region::clipRound(sx2 * scaleX);
			sy1 = $Region::clipRound(sy1 * scaleY);
			sy2 = $Region::clipRound(sy2 * scaleY);
			$var($AffineTransform, tx, nullptr);
			if (xform != nullptr) {
				$assign(tx, $new($AffineTransform, this->transform$));
				transform(xform);
			}
			bool result = scaleImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer);
			if (tx != nullptr) {
				$nc(this->transform$)->setTransform(tx);
				invalidateTransform();
			}
			return $Boolean::valueOf(result);
		} else if ($instanceOf($MultiResolutionImage, img)) {
			int32_t width = $nc(img)->getWidth(observer);
			int32_t height = img->getHeight(observer);
			$var($MultiResolutionImage, mrImage, $cast($MultiResolutionImage, img));
			$var($Image, resolutionVariant, getResolutionVariant(mrImage, width, height, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, xform));
			if (resolutionVariant != img && resolutionVariant != nullptr) {
				$var($ImageObserver, rvObserver, $MultiResolutionToolkitImage::getResolutionVariantObserver(img, observer, width, height, -1, -1));
				int32_t rvWidth = resolutionVariant->getWidth(rvObserver);
				int32_t rvHeight = resolutionVariant->getHeight(rvObserver);
				if (rvWidth < 0 || rvHeight < 0) {
					$assign(resolutionVariant, mrImage->getResolutionVariant((double)width, (double)height));
					rvWidth = $nc(resolutionVariant)->getWidth(rvObserver);
					rvHeight = resolutionVariant->getHeight(rvObserver);
				}
				if (0 < width && 0 < height && 0 < rvWidth && 0 < rvHeight) {
					double widthScale = ((double)rvWidth) / width;
					double heightScale = ((double)rvHeight) / height;
					if ($instanceOf($VolatileImage, resolutionVariant)) {
						$var($SurfaceData, sd, $nc($($SurfaceManager::getManager(resolutionVariant)))->getPrimarySurfaceData());
						widthScale *= $nc(sd)->getDefaultScaleX();
						heightScale *= sd->getDefaultScaleY();
					}
					sx1 = $Region::clipScale(sx1, widthScale);
					sy1 = $Region::clipScale(sy1, heightScale);
					sx2 = $Region::clipScale(sx2, widthScale);
					sy2 = $Region::clipScale(sy2, heightScale);
					$assign(observer, rvObserver);
					$assign(img, resolutionVariant);
					if (xform != nullptr) {
						if (!SunGraphics2D::$assertionsDisabled && !(dx1 == 0 && dy1 == 0)) {
							$throwNew($AssertionError);
						}
						$var($AffineTransform, renderTX, $new($AffineTransform, xform));
						renderTX->scale(1 / widthScale, 1 / heightScale);
						return $Boolean::valueOf(transformImage(img, renderTX, observer));
					}
					return $Boolean::valueOf(scaleImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer));
				} else {
					return $Boolean::valueOf(false);
				}
			}
		}
	} catch ($InvalidPipeException&) {
		$var($InvalidPipeException, e, $catch());
		return $Boolean::valueOf(false);
	}
	return nullptr;
}

bool SunGraphics2D::scaleImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgcolor, $ImageObserver* observer) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				var$2 = $nc(this->imagepipe)->scaleImage(this, img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer);
				return$1 = true;
				goto $finally;
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					return $nc(this->imagepipe)->scaleImage(this, img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer);
				} catch ($InvalidPipeException&) {
					$var($InvalidPipeException, e2, $catch());
					return false;
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool SunGraphics2D::transformImage($Image* img, $AffineTransform* xform, $ImageObserver* observer) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				var$2 = $nc(this->imagepipe)->transformImage(this, img, xform, observer);
				return$1 = true;
				goto $finally;
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					return $nc(this->imagepipe)->transformImage(this, img, xform, observer);
				} catch ($InvalidPipeException&) {
					$var($InvalidPipeException, e2, $catch());
					return false;
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Image* SunGraphics2D::getResolutionVariant($MultiResolutionImage* img, int32_t srcWidth, int32_t srcHeight, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $AffineTransform* xform) {
	if (srcWidth <= 0 || srcHeight <= 0) {
		return nullptr;
	}
	int32_t sw = sx2 - sx1;
	int32_t sh = sy2 - sy1;
	if (sw == 0 || sh == 0) {
		return nullptr;
	}
	$var($AffineTransform, tx, nullptr);
	if (xform == nullptr) {
		$assign(tx, this->transform$);
	} else {
		$assign(tx, $new($AffineTransform, this->transform$));
		tx->concatenate(xform);
	}
	int32_t type = $nc(tx)->getType();
	int32_t dw = dx2 - dx1;
	int32_t dh = dy2 - dy1;
	double destImageWidth = 0.0;
	double destImageHeight = 0.0;
	if (this->resolutionVariantHint == $SunHints::INTVAL_RESOLUTION_VARIANT_BASE) {
		destImageWidth = (double)srcWidth;
		destImageHeight = (double)srcHeight;
	} else if (this->resolutionVariantHint == $SunHints::INTVAL_RESOLUTION_VARIANT_DPI_FIT) {
		$var($AffineTransform, configTransform, getDefaultTransform());
		if ($nc(configTransform)->isIdentity()) {
			destImageWidth = (double)srcWidth;
			destImageHeight = (double)srcHeight;
		} else {
			destImageWidth = srcWidth * configTransform->getScaleX();
			destImageHeight = srcHeight * configTransform->getScaleY();
		}
	} else {
		double destRegionWidth = 0.0;
		double destRegionHeight = 0.0;
		if (((int32_t)(type & (uint32_t)~(1 | 64))) == 0) {
			destRegionWidth = (double)dw;
			destRegionHeight = (double)dh;
		} else if (((int32_t)(type & (uint32_t)~((1 | 64) | 6))) == 0) {
			destRegionWidth = dw * tx->getScaleX();
			destRegionHeight = dh * tx->getScaleY();
		} else {
			int32_t var$0 = dw;
			double var$2 = tx->getScaleX();
			double var$1 = $Math::hypot(var$2, tx->getShearY());
			destRegionWidth = var$0 * var$1;
			int32_t var$3 = dh;
			double var$5 = tx->getShearX();
			double var$4 = $Math::hypot(var$5, tx->getScaleY());
			destRegionHeight = var$3 * var$4;
		}
		destImageWidth = $Math::abs(srcWidth * destRegionWidth / sw);
		destImageHeight = $Math::abs(srcHeight * destRegionHeight / sh);
	}
	$var($Image, resolutionVariant, $nc(img)->getResolutionVariant(destImageWidth, destImageHeight));
	if ($instanceOf($ToolkitImage, resolutionVariant) && $nc(($cast($ToolkitImage, resolutionVariant)))->hasError()) {
		return nullptr;
	}
	return resolutionVariant;
}

bool SunGraphics2D::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $ImageObserver* observer) {
	return drawImage(img, x, y, width, height, nullptr, observer);
}

bool SunGraphics2D::copyImage($Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t width, int32_t height, $Color* bgcolor, $ImageObserver* observer) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				var$2 = $nc(this->imagepipe)->copyImage(this, img, dx, dy, sx, sy, width, height, bgcolor, observer);
				return$1 = true;
				goto $finally;
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					return $nc(this->imagepipe)->copyImage(this, img, dx, dy, sx, sy, width, height, bgcolor, observer);
				} catch ($InvalidPipeException&) {
					$var($InvalidPipeException, e2, $catch());
					return false;
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool SunGraphics2D::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $Color* bg, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	if ((width == 0) || (height == 0)) {
		return true;
	}
	int32_t imgW = $nc(img)->getWidth(nullptr);
	int32_t imgH = img->getHeight(nullptr);
	$var($Boolean, hidpiImageDrawn, drawHiDPIImage(img, x, y, x + width, y + height, 0, 0, imgW, imgH, bg, observer, nullptr));
	if (hidpiImageDrawn != nullptr) {
		return hidpiImageDrawn->booleanValue();
	}
	if (width == imgW && height == imgH) {
		return copyImage(img, x, y, 0, 0, width, height, bg, observer);
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				var$2 = $nc(this->imagepipe)->scaleImage(this, img, x, y, width, height, bg, observer);
				return$1 = true;
				goto $finally;
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					return $nc(this->imagepipe)->scaleImage(this, img, x, y, width, height, bg, observer);
				} catch ($InvalidPipeException&) {
					$var($InvalidPipeException, e2, $catch());
					return false;
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool SunGraphics2D::drawImage($Image* img, int32_t x, int32_t y, $ImageObserver* observer) {
	return drawImage(img, x, y, nullptr, observer);
}

bool SunGraphics2D::drawImage($Image* img, int32_t x, int32_t y, $Color* bg, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	int32_t imgW = $nc(img)->getWidth(nullptr);
	int32_t imgH = img->getHeight(nullptr);
	$var($Boolean, hidpiImageDrawn, drawHiDPIImage(img, x, y, x + imgW, y + imgH, 0, 0, imgW, imgH, bg, observer, nullptr));
	if (hidpiImageDrawn != nullptr) {
		return hidpiImageDrawn->booleanValue();
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				var$2 = $nc(this->imagepipe)->copyImage(this, img, x, y, bg, observer);
				return$1 = true;
				goto $finally;
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					return $nc(this->imagepipe)->copyImage(this, img, x, y, bg, observer);
				} catch ($InvalidPipeException&) {
					$var($InvalidPipeException, e2, $catch());
					return false;
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool SunGraphics2D::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $ImageObserver* observer) {
	return drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, nullptr, observer);
}

bool SunGraphics2D::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgcolor, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	if (dx1 == dx2 || dy1 == dy2 || sx1 == sx2 || sy1 == sy2) {
		return true;
	}
	$var($Boolean, hidpiImageDrawn, drawHiDPIImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer, nullptr));
	if (hidpiImageDrawn != nullptr) {
		return hidpiImageDrawn->booleanValue();
	}
	if (((sx2 - sx1) == (dx2 - dx1)) && ((sy2 - sy1) == (dy2 - dy1))) {
		int32_t srcX = 0;
		int32_t srcY = 0;
		int32_t dstX = 0;
		int32_t dstY = 0;
		int32_t width = 0;
		int32_t height = 0;
		if (sx2 > sx1) {
			width = sx2 - sx1;
			srcX = sx1;
			dstX = dx1;
		} else {
			width = sx1 - sx2;
			srcX = sx2;
			dstX = dx2;
		}
		if (sy2 > sy1) {
			height = sy2 - sy1;
			srcY = sy1;
			dstY = dy1;
		} else {
			height = sy1 - sy2;
			srcY = sy2;
			dstY = dy2;
		}
		return copyImage(img, dstX, dstY, srcX, srcY, width, height, bgcolor, observer);
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				var$2 = $nc(this->imagepipe)->scaleImage(this, img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer);
				return$1 = true;
				goto $finally;
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					return $nc(this->imagepipe)->scaleImage(this, img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer);
				} catch ($InvalidPipeException&) {
					$var($InvalidPipeException, e2, $catch());
					return false;
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool SunGraphics2D::drawImage($Image* img, $AffineTransform* xform, $ImageObserver* observer) {
	if (img == nullptr) {
		return true;
	}
	if (xform == nullptr || $nc(xform)->isIdentity()) {
		return drawImage(img, 0, 0, nullptr, observer);
	}
	int32_t w = $nc(img)->getWidth(nullptr);
	int32_t h = img->getHeight(nullptr);
	$var($Boolean, hidpiImageDrawn, drawHiDPIImage(img, 0, 0, w, h, 0, 0, w, h, nullptr, observer, xform));
	if (hidpiImageDrawn != nullptr) {
		return hidpiImageDrawn->booleanValue();
	}
	return transformImage(img, xform, observer);
}

void SunGraphics2D::drawImage($BufferedImage* bImg, $BufferedImageOp* op, int32_t x, int32_t y) {
	if (bImg == nullptr) {
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->imagepipe)->transformImage(this, bImg, op, x, y);
			} catch ($InvalidPipeException&) {
				$var($InvalidPipeException, e, $catch());
				try {
					revalidateAll();
					$nc(this->imagepipe)->transformImage(this, bImg, op, x, y);
				} catch ($InvalidPipeException&) {
					$catch();
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->surfaceData)->markDirty();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$FontRenderContext* SunGraphics2D::getFontRenderContext() {
	if (this->cachedFRC == nullptr) {
		int32_t aahint = this->textAntialiasHint;
		if (aahint == $SunHints::INTVAL_TEXT_ANTIALIAS_DEFAULT && this->antialiasHint == $SunHints::INTVAL_ANTIALIAS_ON) {
			aahint = $SunHints::INTVAL_TEXT_ANTIALIAS_ON;
		}
		$var($AffineTransform, tx, nullptr);
		if (this->transformState >= SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
			bool var$0 = $nc(this->transform$)->getTranslateX() == 0;
			if (var$0 && $nc(this->transform$)->getTranslateY() == 0) {
				$assign(tx, this->transform$);
			} else {
				double var$1 = $nc(this->transform$)->getScaleX();
				double var$2 = $nc(this->transform$)->getShearY();
				double var$3 = $nc(this->transform$)->getShearX();
				$assign(tx, $new($AffineTransform, var$1, var$2, var$3, $nc(this->transform$)->getScaleY(), (double)0, (double)0));
			}
		}
		$var($AffineTransform, var$4, tx);
		$var($Object, var$5, $of($SunHints$Value::get($SunHints::INTKEY_TEXT_ANTIALIASING, aahint)));
		$set(this, cachedFRC, $new($FontRenderContext, var$4, var$5, $($of($SunHints$Value::get($SunHints::INTKEY_FRACTIONALMETRICS, this->fractionalMetricsHint)))));
	}
	return this->cachedFRC;
}

void SunGraphics2D::dispose() {
	$init($NullSurfaceData);
	$set(this, surfaceData, $NullSurfaceData::theInstance);
	invalidatePipe();
}

void SunGraphics2D::finalize() {
}

$Object* SunGraphics2D::getDestination() {
	return $of($nc(this->surfaceData)->getDestination());
}

$Surface* SunGraphics2D::getDestSurface() {
	return this->surfaceData;
}

void clinit$SunGraphics2D($Class* class$) {
	SunGraphics2D::MinPenSizeSquared = 1.000000001;
	SunGraphics2D::$assertionsDisabled = !SunGraphics2D::class$->desiredAssertionStatus();
	$assignStatic(SunGraphics2D::defaultStroke, $new($BasicStroke));
	$init($AlphaComposite);
	$assignStatic(SunGraphics2D::defaultComposite, $AlphaComposite::SrcOver);
	$init($Font);
	$assignStatic(SunGraphics2D::defaultFont, $new($Font, $Font::DIALOG, $Font::PLAIN, 12));
	SunGraphics2D::lcdTextContrastDefaultValue = 140;
	{
		if ($PerformanceLogger::loggingEnabled()) {
			$PerformanceLogger::setTime("SunGraphics2D static initialization"_s);
		}
	}
	$assignStatic(SunGraphics2D::invalidpipe, $new($ValidatePipe));
	$assignStatic(SunGraphics2D::IDENT_MATRIX, $new($doubles, {
		(double)1,
		(double)0,
		(double)0,
		(double)1
	}));
	$assignStatic(SunGraphics2D::IDENT_ATX, $new($AffineTransform));
	$assignStatic(SunGraphics2D::textTxArr, $new($doubleArray2, SunGraphics2D::TEXTARRSIZE));
	$assignStatic(SunGraphics2D::textAtArr, $new($AffineTransformArray, SunGraphics2D::TEXTARRSIZE));
	{
		for (int32_t i = SunGraphics2D::MINALLOCATED; i < SunGraphics2D::TEXTARRSIZE; ++i) {
			$nc(SunGraphics2D::textTxArr)->set(i, $$new($doubles, {
				(double)i,
				(double)0,
				(double)0,
				(double)i
			}));
			$nc(SunGraphics2D::textAtArr)->set(i, $$new($AffineTransform, $nc(SunGraphics2D::textTxArr)->get(i)));
		}
	}
	SunGraphics2D::MinPenSizeAA = $nc($($RenderingEngine::getInstance()))->getMinimumAAPenSize();
	SunGraphics2D::MinPenSizeAASquared = (SunGraphics2D::MinPenSizeAA * SunGraphics2D::MinPenSizeAA);
}

SunGraphics2D::SunGraphics2D() {
}

$Class* SunGraphics2D::load$($String* name, bool initialize) {
	$loadClass(SunGraphics2D, name, initialize, &_SunGraphics2D_ClassInfo_, clinit$SunGraphics2D, allocate$SunGraphics2D);
	return class$;
}

$Class* SunGraphics2D::class$ = nullptr;

	} // java2d
} // sun