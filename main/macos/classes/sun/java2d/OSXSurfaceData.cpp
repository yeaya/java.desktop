#include <sun/java2d/OSXSurfaceData.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Font.h>
#include <java/awt/GradientPaint.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/Paint.h>
#include <java/awt/PaintContext.h>
#include <java/awt/RadialGradientPaint.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/SystemColor.h>
#include <java/awt/TexturePaint.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/IntBuffer.h>
#include <java/nio/LongBuffer.h>
#include <java/util/Hashtable.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <sun/awt/SunHints$Value.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/java2d/CRenderer.h>
#include <sun/java2d/CompositeCRenderer.h>
#include <sun/java2d/OSXOffScreenSurfaceData.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/DrawImagePipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <sun/lwawt/macosx/CTextPipe.h>
#include <jcpp.h>

#undef CLIP_DEVICE
#undef CLIP_RECTANGULAR
#undef CLIP_SHAPE
#undef COMP_ALPHA
#undef COMP_ISCOPY
#undef INTVAL_ANTIALIAS_ON
#undef KEY_INTERPOLATION
#undef LOWER_BND
#undef MAX_VALUE
#undef MIN_VALUE
#undef NO_CYCLE
#undef PAINT_ALPHACOLOR
#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO
#undef SRC_OVER
#undef TYPE_INT_ARGB_PRE
#undef UPPER_BND

using $AlphaComposite = ::java::awt::AlphaComposite;
using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Font = ::java::awt::Font;
using $GradientPaint = ::java::awt::GradientPaint;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $Paint = ::java::awt::Paint;
using $PaintContext = ::java::awt::PaintContext;
using $RadialGradientPaint = ::java::awt::RadialGradientPaint;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $SystemColor = ::java::awt::SystemColor;
using $TexturePaint = ::java::awt::TexturePaint;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $Hashtable = ::java::util::Hashtable;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $SunHints = ::sun::awt::SunHints;
using $SunHints$Value = ::sun::awt::SunHints$Value;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $CRenderer = ::sun::java2d::CRenderer;
using $CompositeCRenderer = ::sun::java2d::CompositeCRenderer;
using $OSXOffScreenSurfaceData = ::sun::java2d::OSXOffScreenSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $DrawImagePipe = ::sun::java2d::pipe::DrawImagePipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $Region = ::sun::java2d::pipe::Region;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $TextPipe = ::sun::java2d::pipe::TextPipe;
using $CTextPipe = ::sun::lwawt::macosx::CTextPipe;

namespace sun {
	namespace java2d {

$FieldInfo _OSXSurfaceData_FieldInfo_[] = {
	{"UPPER_BND", "F", nullptr, $STATIC | $FINAL, $staticField(OSXSurfaceData, UPPER_BND)},
	{"LOWER_BND", "F", nullptr, $STATIC | $FINAL, $staticField(OSXSurfaceData, LOWER_BND)},
	{"sQuartzPipe", "Lsun/java2d/CRenderer;", nullptr, $PROTECTED | $STATIC, $staticField(OSXSurfaceData, sQuartzPipe)},
	{"sCocoaTextPipe", "Lsun/lwawt/macosx/CTextPipe;", nullptr, $PROTECTED | $STATIC, $staticField(OSXSurfaceData, sCocoaTextPipe)},
	{"sQuartzCompositePipe", "Lsun/java2d/CompositeCRenderer;", nullptr, $PROTECTED | $STATIC, $staticField(OSXSurfaceData, sQuartzCompositePipe)},
	{"fConfig", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE, $field(OSXSurfaceData, fConfig)},
	{"fBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(OSXSurfaceData, fBounds)},
	{"sDefaultGraphicsConfiguration", "Ljava/awt/GraphicsConfiguration;", nullptr, 0, $field(OSXSurfaceData, sDefaultGraphicsConfiguration)},
	{"sSrcComposite", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(OSXSurfaceData, sSrcComposite)},
	{"sDstInComposite", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(OSXSurfaceData, sDstInComposite)},
	{"sDstOutComposite", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(OSXSurfaceData, sDstOutComposite)},
	{"kPrimitive", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kPrimitive)},
	{"kImage", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kImage)},
	{"kText", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kText)},
	{"kCopyArea", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCopyArea)},
	{"kExternal", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kExternal)},
	{"kLine", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kLine)},
	{"kRect", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kRect)},
	{"kRoundRect", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kRoundRect)},
	{"kOval", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kOval)},
	{"kArc", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kArc)},
	{"kPolygon", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kPolygon)},
	{"kShape", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kShape)},
	{"kString", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kString)},
	{"kGlyphs", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kGlyphs)},
	{"kUnicodes", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kUnicodes)},
	{"kCommonParameterCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCommonParameterCount)},
	{"kLineParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kLineParametersCount)},
	{"kRectParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kRectParametersCount)},
	{"kRoundRectParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kRoundRectParametersCount)},
	{"kOvalParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kOvalParametersCount)},
	{"kArcParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kArcParametersCount)},
	{"kPolygonParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kPolygonParametersCount)},
	{"kShapeParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kShapeParametersCount)},
	{"kImageParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kImageParametersCount)},
	{"kStringParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kStringParametersCount)},
	{"kGlyphsParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kGlyphsParametersCount)},
	{"kUnicodesParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kUnicodesParametersCount)},
	{"kPixelParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kPixelParametersCount)},
	{"kExternalParametersCount", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kExternalParametersCount)},
	{"kChangeFlagIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kChangeFlagIndex)},
	{"kBoundsXIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kBoundsXIndex)},
	{"kBoundsYIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kBoundsYIndex)},
	{"kBoundsWidthIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kBoundsWidthIndex)},
	{"kBoundsHeightIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kBoundsHeightIndex)},
	{"kClipStateIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipStateIndex)},
	{"kClipNumTypesIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipNumTypesIndex)},
	{"kClipNumCoordsIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipNumCoordsIndex)},
	{"kClipWindingRuleIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipWindingRuleIndex)},
	{"kClipXIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipXIndex)},
	{"kClipYIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipYIndex)},
	{"kClipWidthIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipWidthIndex)},
	{"kClipHeightIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipHeightIndex)},
	{"kCTMaIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCTMaIndex)},
	{"kCTMbIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCTMbIndex)},
	{"kCTMcIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCTMcIndex)},
	{"kCTMdIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCTMdIndex)},
	{"kCTMtxIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCTMtxIndex)},
	{"kCTMtyIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCTMtyIndex)},
	{"kColorStateIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorStateIndex)},
	{"kColorRGBValueIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorRGBValueIndex)},
	{"kColorIndexValueIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorIndexValueIndex)},
	{"kColorPointerIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorPointerIndex)},
	{"kColorPointerIndex2", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorPointerIndex2)},
	{"kColorRGBValue1Index", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorRGBValue1Index)},
	{"kColorWidthIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorWidthIndex)},
	{"kColorRGBValue2Index", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorRGBValue2Index)},
	{"kColorHeightIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorHeightIndex)},
	{"kColorIsCyclicIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorIsCyclicIndex)},
	{"kColorx1Index", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorx1Index)},
	{"kColortxIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColortxIndex)},
	{"kColory1Index", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColory1Index)},
	{"kColortyIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColortyIndex)},
	{"kColorx2Index", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorx2Index)},
	{"kColorsxIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorsxIndex)},
	{"kColory2Index", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColory2Index)},
	{"kColorsyIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorsyIndex)},
	{"kCompositeRuleIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCompositeRuleIndex)},
	{"kCompositeValueIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCompositeValueIndex)},
	{"kStrokeJoinIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kStrokeJoinIndex)},
	{"kStrokeCapIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kStrokeCapIndex)},
	{"kStrokeWidthIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kStrokeWidthIndex)},
	{"kStrokeDashPhaseIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kStrokeDashPhaseIndex)},
	{"kStrokeLimitIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kStrokeLimitIndex)},
	{"kHintsAntialiasIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kHintsAntialiasIndex)},
	{"kHintsTextAntialiasIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kHintsTextAntialiasIndex)},
	{"kHintsFractionalMetricsIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kHintsFractionalMetricsIndex)},
	{"kHintsRenderingIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kHintsRenderingIndex)},
	{"kHintsInterpolationIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kHintsInterpolationIndex)},
	{"kRadiusIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kRadiusIndex)},
	{"kSizeOfParameters", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kSizeOfParameters)},
	{"kClipCoordinatesIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipCoordinatesIndex)},
	{"kClipTypesIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipTypesIndex)},
	{"kTextureImageIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kTextureImageIndex)},
	{"kStrokeDashArrayIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kStrokeDashArrayIndex)},
	{"kFontIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kFontIndex)},
	{"kFontPaintIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kFontPaintIndex)},
	{"kColorArrayIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorArrayIndex)},
	{"kFractionsArrayIndex", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kFractionsArrayIndex)},
	{"kBoundsChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kBoundsChangedBit)},
	{"kBoundsNotChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kBoundsNotChangedBit)},
	{"kClipChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipChangedBit)},
	{"kClipNotChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipNotChangedBit)},
	{"kCTMChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCTMChangedBit)},
	{"kCTMNotChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCTMNotChangedBit)},
	{"kColorChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorChangedBit)},
	{"kColorNotChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorNotChangedBit)},
	{"kCompositeChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCompositeChangedBit)},
	{"kCompositeNotChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kCompositeNotChangedBit)},
	{"kStrokeChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kStrokeChangedBit)},
	{"kStrokeNotChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kStrokeNotChangedBit)},
	{"kHintsChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kHintsChangedBit)},
	{"kHintsNotChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kHintsNotChangedBit)},
	{"kFontChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kFontChangedBit)},
	{"kFontNotChangedBit", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kFontNotChangedBit)},
	{"kEverythingChangedFlag", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kEverythingChangedFlag)},
	{"kColorSimple", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorSimple)},
	{"kColorSystem", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorSystem)},
	{"kColorGradient", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorGradient)},
	{"kColorTexture", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorTexture)},
	{"kColorLinearGradient", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorLinearGradient)},
	{"kColorRadialGradient", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorRadialGradient)},
	{"kColorNonCyclic", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorNonCyclic)},
	{"kColorCyclic", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kColorCyclic)},
	{"kClipRect", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipRect)},
	{"kClipShape", "I", nullptr, $STATIC | $FINAL, $constField(OSXSurfaceData, kClipShape)},
	{"fChangeFlag", "I", nullptr, 0, $field(OSXSurfaceData, fChangeFlag)},
	{"fGraphicsStates", "Ljava/nio/ByteBuffer;", nullptr, $PROTECTED, $field(OSXSurfaceData, fGraphicsStates)},
	{"fGraphicsStatesInt", "Ljava/nio/IntBuffer;", nullptr, 0, $field(OSXSurfaceData, fGraphicsStatesInt)},
	{"fGraphicsStatesFloat", "Ljava/nio/FloatBuffer;", nullptr, 0, $field(OSXSurfaceData, fGraphicsStatesFloat)},
	{"fGraphicsStatesLong", "Ljava/nio/LongBuffer;", nullptr, 0, $field(OSXSurfaceData, fGraphicsStatesLong)},
	{"fGraphicsStatesObject", "[Ljava/lang/Object;", nullptr, $PROTECTED, $field(OSXSurfaceData, fGraphicsStatesObject)},
	{"userBounds", "Ljava/awt/Rectangle;", nullptr, 0, $field(OSXSurfaceData, userBounds)},
	{"lastUserX", "F", nullptr, 0, $field(OSXSurfaceData, lastUserX)},
	{"lastUserY", "F", nullptr, 0, $field(OSXSurfaceData, lastUserY)},
	{"lastUserW", "F", nullptr, 0, $field(OSXSurfaceData, lastUserW)},
	{"lastUserH", "F", nullptr, 0, $field(OSXSurfaceData, lastUserH)},
	{"clipCoordinatesArray", "Ljava/nio/FloatBuffer;", nullptr, 0, $field(OSXSurfaceData, clipCoordinatesArray)},
	{"clipTypesArray", "Ljava/nio/IntBuffer;", nullptr, 0, $field(OSXSurfaceData, clipTypesArray)},
	{"lastClipShape", "Ljava/awt/Shape;", nullptr, 0, $field(OSXSurfaceData, lastClipShape)},
	{"lastClipX", "F", nullptr, 0, $field(OSXSurfaceData, lastClipX)},
	{"lastClipY", "F", nullptr, 0, $field(OSXSurfaceData, lastClipY)},
	{"lastClipW", "F", nullptr, 0, $field(OSXSurfaceData, lastClipW)},
	{"lastClipH", "F", nullptr, 0, $field(OSXSurfaceData, lastClipH)},
	{"lastCTM", "[D", nullptr, $FINAL, $field(OSXSurfaceData, lastCTM)},
	{"lastCTMa", "F", nullptr, 0, $field(OSXSurfaceData, lastCTMa)},
	{"lastCTMb", "F", nullptr, 0, $field(OSXSurfaceData, lastCTMb)},
	{"lastCTMc", "F", nullptr, 0, $field(OSXSurfaceData, lastCTMc)},
	{"lastCTMd", "F", nullptr, 0, $field(OSXSurfaceData, lastCTMd)},
	{"lastCTMtx", "F", nullptr, 0, $field(OSXSurfaceData, lastCTMtx)},
	{"lastCTMty", "F", nullptr, 0, $field(OSXSurfaceData, lastCTMty)},
	{"sIdentityMatrix", "Ljava/awt/geom/AffineTransform;", nullptr, $STATIC, $staticField(OSXSurfaceData, sIdentityMatrix)},
	{"lastPaint", "Ljava/awt/Paint;", nullptr, 0, $field(OSXSurfaceData, lastPaint)},
	{"lastPaintPtr", "J", nullptr, 0, $field(OSXSurfaceData, lastPaintPtr)},
	{"lastPaintRGB", "I", nullptr, 0, $field(OSXSurfaceData, lastPaintRGB)},
	{"lastPaintIndex", "I", nullptr, 0, $field(OSXSurfaceData, lastPaintIndex)},
	{"texturePaintImage", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(OSXSurfaceData, texturePaintImage)},
	{"lastComposite", "Ljava/awt/Composite;", nullptr, 0, $field(OSXSurfaceData, lastComposite)},
	{"lastCompositeAlphaRule", "I", nullptr, 0, $field(OSXSurfaceData, lastCompositeAlphaRule)},
	{"lastCompositeAlphaValue", "F", nullptr, 0, $field(OSXSurfaceData, lastCompositeAlphaValue)},
	{"lastStroke", "Ljava/awt/BasicStroke;", nullptr, 0, $field(OSXSurfaceData, lastStroke)},
	{"defaultBasicStroke", "Ljava/awt/BasicStroke;", nullptr, $STATIC, $staticField(OSXSurfaceData, defaultBasicStroke)},
	{"lastFont", "Ljava/awt/Font;", nullptr, 0, $field(OSXSurfaceData, lastFont)},
	{"sg2dCurrent", "Lsun/java2d/SunGraphics2D;", nullptr, 0, $field(OSXSurfaceData, sg2dCurrent)},
	{"threadCurrent", "Ljava/lang/Thread;", nullptr, 0, $field(OSXSurfaceData, threadCurrent)},
	{"segmentCoordinatesArray", "[F", nullptr, $FINAL, $field(OSXSurfaceData, segmentCoordinatesArray)},
	{"shapeCoordinatesArray", "Ljava/nio/FloatBuffer;", nullptr, 0, $field(OSXSurfaceData, shapeCoordinatesArray)},
	{"shapeTypesArray", "Ljava/nio/IntBuffer;", nullptr, 0, $field(OSXSurfaceData, shapeTypesArray)},
	{"srcCopyAreaRect", "Ljava/awt/Rectangle;", nullptr, 0, $field(OSXSurfaceData, srcCopyAreaRect)},
	{"dstCopyAreaRect", "Ljava/awt/Rectangle;", nullptr, 0, $field(OSXSurfaceData, dstCopyAreaRect)},
	{"finalCopyAreaRect", "Ljava/awt/Rectangle;", nullptr, 0, $field(OSXSurfaceData, finalCopyAreaRect)},
	{"copyAreaBounds", "Ljava/awt/Rectangle;", nullptr, 0, $field(OSXSurfaceData, copyAreaBounds)},
	{}
};

$MethodInfo _OSXSurfaceData_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC, $method(static_cast<void(OSXSurfaceData::*)($SurfaceType*,$ColorModel*)>(&OSXSurfaceData::init$))},
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;Ljava/awt/GraphicsConfiguration;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(OSXSurfaceData::*)($SurfaceType*,$ColorModel*,$GraphicsConfiguration*,$Rectangle*)>(&OSXSurfaceData::init$))},
	{"IsSimpleColor", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(Object$*)>(&OSXSurfaceData::IsSimpleColor))},
	{"blitImage", "(Lsun/java2d/CRenderer;Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;ZZIIIIIIIILjava/awt/Color;)V", nullptr, $PUBLIC},
	{"canRenderLCDText", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC},
	{"clearRect", "(Ljava/awt/image/BufferedImage;II)V", nullptr, $PUBLIC},
	{"clipCopyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIILjava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $ABSTRACT},
	{"doArc", "(Lsun/java2d/CRenderer;Lsun/java2d/SunGraphics2D;FFFFFFIZ)V", nullptr, $PUBLIC},
	{"doLine", "(Lsun/java2d/CRenderer;Lsun/java2d/SunGraphics2D;FFFF)V", nullptr, $PUBLIC},
	{"doOval", "(Lsun/java2d/CRenderer;Lsun/java2d/SunGraphics2D;FFFFZ)V", nullptr, $PUBLIC},
	{"doPolygon", "(Lsun/java2d/CRenderer;Lsun/java2d/SunGraphics2D;[I[IIZZ)V", nullptr, $PUBLIC},
	{"doRect", "(Lsun/java2d/CRenderer;Lsun/java2d/SunGraphics2D;FFFFZ)V", nullptr, $PUBLIC},
	{"doRoundRect", "(Lsun/java2d/CRenderer;Lsun/java2d/SunGraphics2D;FFFFFFZ)V", nullptr, $PUBLIC},
	{"drawGlyphs", "(Lsun/lwawt/macosx/CTextPipe;Lsun/java2d/SunGraphics2D;JLjava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC},
	{"drawString", "(Lsun/lwawt/macosx/CTextPipe;Lsun/java2d/SunGraphics2D;JLjava/lang/String;DD)V", nullptr, $PUBLIC},
	{"drawUnicodes", "(Lsun/lwawt/macosx/CTextPipe;Lsun/java2d/SunGraphics2D;J[CIIFF)V", nullptr, $PUBLIC},
	{"drawfillShape", "(Lsun/java2d/CRenderer;Lsun/java2d/SunGraphics2D;Ljava/awt/geom/GeneralPath;ZZ)V", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getBufferOfSize", "(I)Ljava/nio/ByteBuffer;", nullptr, $STATIC, $method(static_cast<$ByteBuffer*(*)(int32_t)>(&OSXSurfaceData::getBufferOfSize))},
	{"getCompositingDstInImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getCompositingDstOutImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getCompositingImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PROTECTED},
	{"getCompositingImageSame", "(Ljava/awt/image/BufferedImage;II)Ljava/awt/image/BufferedImage;", nullptr, $PROTECTED},
	{"getCompositingSrcImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getPathCoordinates", "(Ljava/awt/geom/GeneralPath;Ljava/nio/FloatBuffer;Ljava/nio/IntBuffer;)I", nullptr, 0},
	{"getPathLength", "(Ljava/awt/geom/GeneralPath;)I", nullptr, 0},
	{"getRendererTypeForPrimitive", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&OSXSurfaceData::getRendererTypeForPrimitive))},
	{"intersection", "(Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, 0},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isCustomPaint", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{"markDirty", "(Z)V", nullptr, $PROTECTED},
	{"setBounds", "(IIII)V", nullptr, $PROTECTED},
	{"setGradientViaRasterPath", "(Lsun/java2d/SunGraphics2D;)V", nullptr, 0},
	{"setPipesToQuartzComposite", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PROTECTED},
	{"setUserBounds", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, 0},
	{"setupClip", "(Lsun/java2d/SunGraphics2D;)V", nullptr, 0},
	{"setupComposite", "(Lsun/java2d/SunGraphics2D;)V", nullptr, 0},
	{"setupFont", "(Ljava/awt/Font;Ljava/awt/Paint;)V", nullptr, 0},
	{"setupGraphicsState", "(Lsun/java2d/SunGraphics2D;I)V", nullptr, 0},
	{"setupGraphicsState", "(Lsun/java2d/SunGraphics2D;IIIII)V", nullptr, 0},
	{"setupGraphicsState", "(Lsun/java2d/SunGraphics2D;ILjava/awt/Font;IIII)V", nullptr, 0},
	{"setupPaint", "(Lsun/java2d/SunGraphics2D;IIII)V", nullptr, 0},
	{"setupRenderingHints", "(Lsun/java2d/SunGraphics2D;)V", nullptr, 0},
	{"setupStroke", "(Lsun/java2d/SunGraphics2D;)V", nullptr, 0},
	{"setupTransform", "(Lsun/java2d/SunGraphics2D;)V", nullptr, 0},
	{"validatePipe", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PUBLIC},
	{"xorSurfacePixels", "(Lsun/java2d/SunGraphics2D;Ljava/awt/image/BufferedImage;IIIII)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _OSXSurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.OSXSurfaceData$CGContextDrawable", "sun.java2d.OSXSurfaceData", "CGContextDrawable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _OSXSurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.OSXSurfaceData",
	"sun.awt.image.BufImgSurfaceData",
	nullptr,
	_OSXSurfaceData_FieldInfo_,
	_OSXSurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_OSXSurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.OSXSurfaceData$CGContextDrawable"
};

$Object* allocate$OSXSurfaceData($Class* clazz) {
	return $of($alloc(OSXSurfaceData));
}

float OSXSurfaceData::UPPER_BND = 0.0;
float OSXSurfaceData::LOWER_BND = 0.0;
$CRenderer* OSXSurfaceData::sQuartzPipe = nullptr;
$CTextPipe* OSXSurfaceData::sCocoaTextPipe = nullptr;
$CompositeCRenderer* OSXSurfaceData::sQuartzCompositePipe = nullptr;
$AffineTransform* OSXSurfaceData::sIdentityMatrix = nullptr;
$BasicStroke* OSXSurfaceData::defaultBasicStroke = nullptr;

void OSXSurfaceData::init$($SurfaceType* sType, $ColorModel* cm) {
	OSXSurfaceData::init$(sType, cm, nullptr, $$new($Rectangle));
}

void OSXSurfaceData::init$($SurfaceType* sType, $ColorModel* cm, $GraphicsConfiguration* config, $Rectangle* bounds) {
	$BufImgSurfaceData::init$(sType, cm);
	$set(this, sDefaultGraphicsConfiguration, nullptr);
	$set(this, sSrcComposite, nullptr);
	$set(this, sDstInComposite, nullptr);
	$set(this, sDstOutComposite, nullptr);
	$set(this, fGraphicsStates, nullptr);
	$set(this, fGraphicsStatesInt, nullptr);
	$set(this, fGraphicsStatesFloat, nullptr);
	$set(this, fGraphicsStatesLong, nullptr);
	$set(this, fGraphicsStatesObject, nullptr);
	$set(this, userBounds, $new($Rectangle));
	this->lastUserX = (float)0;
	this->lastUserY = (float)0;
	this->lastUserW = (float)0;
	this->lastUserH = (float)0;
	$set(this, clipCoordinatesArray, nullptr);
	$set(this, clipTypesArray, nullptr);
	$set(this, lastClipShape, nullptr);
	this->lastClipX = (float)0;
	this->lastClipY = (float)0;
	this->lastClipW = (float)0;
	this->lastClipH = (float)0;
	$set(this, lastCTM, $new($doubles, 6));
	this->lastCTMa = (float)0;
	this->lastCTMb = (float)0;
	this->lastCTMc = (float)0;
	this->lastCTMd = (float)0;
	this->lastCTMtx = (float)0;
	this->lastCTMty = (float)0;
	$set(this, lastPaint, nullptr);
	this->lastPaintPtr = 0;
	this->lastPaintRGB = 0;
	this->lastPaintIndex = 0;
	$set(this, texturePaintImage, nullptr);
	this->lastCompositeAlphaRule = 0;
	this->lastCompositeAlphaValue = (float)0;
	$set(this, lastStroke, nullptr);
	$set(this, sg2dCurrent, nullptr);
	$set(this, threadCurrent, nullptr);
	$set(this, segmentCoordinatesArray, $new($floats, 6));
	$set(this, shapeCoordinatesArray, nullptr);
	$set(this, shapeTypesArray, nullptr);
	$set(this, srcCopyAreaRect, $new($Rectangle));
	$set(this, dstCopyAreaRect, $new($Rectangle));
	$set(this, finalCopyAreaRect, $new($Rectangle));
	$set(this, copyAreaBounds, $new($Rectangle));
	$set(this, fConfig, config);
	$set(this, fBounds, $new($Rectangle, $nc(bounds)->x, bounds->y, bounds->width, bounds->y + bounds->height));
	$set(this, fGraphicsStates, getBufferOfSize(OSXSurfaceData::kSizeOfParameters));
	$set(this, fGraphicsStatesInt, $nc(this->fGraphicsStates)->asIntBuffer());
	$set(this, fGraphicsStatesFloat, $nc(this->fGraphicsStates)->asFloatBuffer());
	$set(this, fGraphicsStatesLong, $nc(this->fGraphicsStates)->asLongBuffer());
	$set(this, fGraphicsStatesObject, $new($ObjectArray, 8));
}

void OSXSurfaceData::validatePipe($SunGraphics2D* sg2d) {
	if ($nc(sg2d)->compositeState <= $SunGraphics2D::COMP_ALPHA) {
		if (OSXSurfaceData::sCocoaTextPipe == nullptr) {
			$assignStatic(OSXSurfaceData::sCocoaTextPipe, $new($CTextPipe));
		}
		$set(sg2d, imagepipe, OSXSurfaceData::sQuartzPipe);
		$set(sg2d, drawpipe, OSXSurfaceData::sQuartzPipe);
		$set(sg2d, fillpipe, OSXSurfaceData::sQuartzPipe);
		$set(sg2d, shapepipe, OSXSurfaceData::sQuartzPipe);
		$set(sg2d, textpipe, OSXSurfaceData::sCocoaTextPipe);
	} else {
		setPipesToQuartzComposite(sg2d);
	}
}

void OSXSurfaceData::setPipesToQuartzComposite($SunGraphics2D* sg2d) {
	if (OSXSurfaceData::sQuartzCompositePipe == nullptr) {
		$assignStatic(OSXSurfaceData::sQuartzCompositePipe, $new($CompositeCRenderer));
	}
	if (OSXSurfaceData::sCocoaTextPipe == nullptr) {
		$assignStatic(OSXSurfaceData::sCocoaTextPipe, $new($CTextPipe));
	}
	$set($nc(sg2d), imagepipe, OSXSurfaceData::sQuartzCompositePipe);
	$set(sg2d, drawpipe, OSXSurfaceData::sQuartzCompositePipe);
	$set(sg2d, fillpipe, OSXSurfaceData::sQuartzCompositePipe);
	$set(sg2d, shapepipe, OSXSurfaceData::sQuartzCompositePipe);
	$set(sg2d, textpipe, OSXSurfaceData::sCocoaTextPipe);
}

$Rectangle* OSXSurfaceData::getBounds() {
	return $new($Rectangle, $nc(this->fBounds)->x, $nc(this->fBounds)->y, $nc(this->fBounds)->width, $nc(this->fBounds)->height - $nc(this->fBounds)->y);
}

$GraphicsConfiguration* OSXSurfaceData::getDeviceConfiguration() {
	return this->fConfig;
}

void OSXSurfaceData::setBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(this->fBounds)->setBounds(x, y, w, y + h);
}

$BufferedImage* OSXSurfaceData::getCompositingImage(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (this->sDefaultGraphicsConfiguration == nullptr) {
		$set(this, sDefaultGraphicsConfiguration, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	}
	$var($BufferedImage, img, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB_PRE));
	clearRect(img, w, h);
	return img;
}

$BufferedImage* OSXSurfaceData::getCompositingImageSame($BufferedImage* img$renamed, int32_t w, int32_t h) {
	$var($BufferedImage, img, img$renamed);
	bool var$0 = (img == nullptr) || ($nc(img)->getWidth() != w);
	if (var$0 || ($nc(img)->getHeight() != h)) {
		$assign(img, getCompositingImage(w, h));
	}
	return img;
}

$BufferedImage* OSXSurfaceData::getCompositingSrcImage(int32_t w, int32_t h) {
	$var($BufferedImage, bim, getCompositingImageSame(this->sSrcComposite, w, h));
	$set(this, sSrcComposite, bim);
	return bim;
}

$BufferedImage* OSXSurfaceData::getCompositingDstInImage(int32_t w, int32_t h) {
	$var($BufferedImage, bim, getCompositingImageSame(this->sDstInComposite, w, h));
	$set(this, sDstInComposite, bim);
	return bim;
}

$BufferedImage* OSXSurfaceData::getCompositingDstOutImage(int32_t w, int32_t h) {
	$var($BufferedImage, bim, getCompositingImageSame(this->sDstOutComposite, w, h));
	$set(this, sDstOutComposite, bim);
	return bim;
}

void OSXSurfaceData::clearRect($BufferedImage* bim, int32_t w, int32_t h) {
	$var($Graphics2D, g, $nc(bim)->createGraphics());
	$init($AlphaComposite);
	$nc(g)->setComposite($AlphaComposite::Clear);
	g->fillRect(0, 0, w, h);
	g->dispose();
}

void OSXSurfaceData::invalidate() {
}

int32_t OSXSurfaceData::getRendererTypeForPrimitive(int32_t primitiveType) {
	$init(OSXSurfaceData);
	switch (primitiveType) {
	case OSXSurfaceData::kImage:
		{
			return OSXSurfaceData::kImage;
		}
	case OSXSurfaceData::kCopyArea:
		{
			return OSXSurfaceData::kCopyArea;
		}
	case OSXSurfaceData::kExternal:
		{
			return OSXSurfaceData::kExternal;
		}
	case OSXSurfaceData::kString:
		{}
	case OSXSurfaceData::kGlyphs:
		{}
	case OSXSurfaceData::kUnicodes:
		{
			return OSXSurfaceData::kText;
		}
	default:
		{
			return OSXSurfaceData::kPrimitive;
		}
	}
}

void OSXSurfaceData::setUserBounds($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height) {
	if ((this->lastUserX != x) || (this->lastUserY != y) || (this->lastUserW != width) || (this->lastUserH != height)) {
		this->lastUserX = (float)x;
		this->lastUserY = (float)y;
		this->lastUserW = (float)width;
		this->lastUserH = (float)height;
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kBoundsXIndex, x);
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kBoundsYIndex, y);
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kBoundsWidthIndex, width);
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kBoundsHeightIndex, height);
		$nc(this->userBounds)->setBounds(x, y, width, height);
		this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kBoundsChangedBit);
	} else {
		this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kBoundsNotChangedBit));
	}
}

$ByteBuffer* OSXSurfaceData::getBufferOfSize(int32_t size) {
	$init(OSXSurfaceData);
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, buffer, $ByteBuffer::allocateDirect(size * 4));
	$nc(buffer)->order($($ByteOrder::nativeOrder()));
	return buffer;
}

void OSXSurfaceData::setupClip($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	switch ($nc(sg2d)->clipState) {
	case $SunGraphics2D::CLIP_DEVICE:
		{}
	case $SunGraphics2D::CLIP_RECTANGULAR:
		{
			{
				$var($Region, clip, sg2d->getCompClip());
				float x = (float)$nc(clip)->getLoX();
				float y = (float)clip->getLoY();
				float w = (float)clip->getWidth();
				float h = (float)clip->getHeight();
				if (($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kClipStateIndex) != OSXSurfaceData::kClipRect) || (x != this->lastClipX) || (y != this->lastClipY) || (w != this->lastClipW) || (h != this->lastClipH)) {
					$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kClipXIndex, x);
					$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kClipYIndex, y);
					$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kClipWidthIndex, w);
					$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kClipHeightIndex, h);
					this->lastClipX = x;
					this->lastClipY = y;
					this->lastClipW = w;
					this->lastClipH = h;
					this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kClipChangedBit);
				} else {
					this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kClipNotChangedBit));
				}
				$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kClipStateIndex, OSXSurfaceData::kClipRect);
				break;
			}
		}
	case $SunGraphics2D::CLIP_SHAPE:
		{
			{
				$set(this, lastClipShape, sg2d->usrClip);
				$var($GeneralPath, gp, nullptr);
				if ($instanceOf($GeneralPath, sg2d->usrClip)) {
					$assign(gp, $cast($GeneralPath, sg2d->usrClip));
				} else {
					$assign(gp, $new($GeneralPath, sg2d->usrClip));
				}
				int32_t shapeLength = getPathLength(gp);
				if ((this->clipCoordinatesArray == nullptr) || ($nc(this->clipCoordinatesArray)->capacity() < (shapeLength * 6))) {
					$set(this, clipCoordinatesArray, $nc($(getBufferOfSize(shapeLength * 6)))->asFloatBuffer());
				}
				if ((this->clipTypesArray == nullptr) || ($nc(this->clipTypesArray)->capacity() < shapeLength)) {
					$set(this, clipTypesArray, $nc($(getBufferOfSize(shapeLength)))->asIntBuffer());
				}
				int32_t windingRule = getPathCoordinates(gp, this->clipCoordinatesArray, this->clipTypesArray);
				$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kClipNumTypesIndex, $nc(this->clipTypesArray)->position());
				$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kClipNumCoordsIndex, $nc(this->clipCoordinatesArray)->position());
				$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kClipWindingRuleIndex, windingRule);
				$nc(this->fGraphicsStatesObject)->set(OSXSurfaceData::kClipTypesIndex, this->clipTypesArray);
				$nc(this->fGraphicsStatesObject)->set(OSXSurfaceData::kClipCoordinatesIndex, this->clipCoordinatesArray);
				this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kClipChangedBit);
				$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kClipStateIndex, OSXSurfaceData::kClipShape);
				break;
			}
		}
	}
}

void OSXSurfaceData::setupTransform($SunGraphics2D* sg2d) {
	$nc($nc(sg2d)->transform$)->getMatrix(this->lastCTM);
	float a = (float)$nc(this->lastCTM)->get(0);
	float b = (float)$nc(this->lastCTM)->get(1);
	float c = (float)$nc(this->lastCTM)->get(2);
	float d = (float)$nc(this->lastCTM)->get(3);
	float tx = (float)$nc(this->lastCTM)->get(4);
	float ty = (float)$nc(this->lastCTM)->get(5);
	if (tx != this->lastCTMtx || ty != this->lastCTMty || a != this->lastCTMa || b != this->lastCTMb || c != this->lastCTMc || d != this->lastCTMd) {
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kCTMaIndex, a);
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kCTMbIndex, b);
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kCTMcIndex, c);
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kCTMdIndex, d);
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kCTMtxIndex, tx);
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kCTMtyIndex, ty);
		this->lastCTMa = a;
		this->lastCTMb = b;
		this->lastCTMc = c;
		this->lastCTMd = d;
		this->lastCTMtx = tx;
		this->lastCTMty = ty;
		this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kCTMChangedBit);
	} else {
		this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kCTMNotChangedBit));
	}
}

void OSXSurfaceData::setGradientViaRasterPath($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	if (($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kColorStateIndex) != OSXSurfaceData::kColorTexture) || (this->lastPaint != $nc(sg2d)->paint) || (((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kBoundsChangedBit)) != 0)) {
		$var($ColorModel, var$0, sg2d->getDeviceColorModel());
		$var($Rectangle, var$1, this->userBounds);
		$var($Rectangle2D, var$2, static_cast<$Rectangle2D*>(this->userBounds));
		$var($AffineTransform, var$3, OSXSurfaceData::sIdentityMatrix);
		$var($PaintContext, context, $nc($nc(sg2d)->paint)->createContext(var$0, var$1, var$2, var$3, $(sg2d->getRenderingHints())));
		$var($WritableRaster, raster, ($cast($WritableRaster, $nc(context)->getRaster($nc(this->userBounds)->x, $nc(this->userBounds)->y, $nc(this->userBounds)->width, $nc(this->userBounds)->height))));
		$var($ColorModel, cm, context->getColorModel());
		$set(this, texturePaintImage, $new($BufferedImage, cm, raster, $nc(cm)->isAlphaPremultiplied(), ($Hashtable*)nullptr));
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorStateIndex, OSXSurfaceData::kColorTexture);
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorWidthIndex, $nc(this->texturePaintImage)->getWidth());
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorHeightIndex, $nc(this->texturePaintImage)->getHeight());
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColortxIndex, (float)$nc(this->userBounds)->getX());
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColortyIndex, (float)$nc(this->userBounds)->getY());
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColorsxIndex, 1.0f);
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColorsyIndex, 1.0f);
		$nc(this->fGraphicsStatesObject)->set(OSXSurfaceData::kTextureImageIndex, $($OSXOffScreenSurfaceData::createNewSurface(this->texturePaintImage)));
		this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kColorChangedBit);
	} else {
		this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kColorNotChangedBit));
	}
}

void OSXSurfaceData::setupPaint($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SystemColor, $nc(sg2d)->paint)) {
		$var($SystemColor, color, $cast($SystemColor, sg2d->paint));
		int32_t index = $nc(color)->hashCode();
		if (($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kColorStateIndex) != OSXSurfaceData::kColorSystem) || (index != this->lastPaintIndex)) {
			this->lastPaintIndex = index;
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorStateIndex, OSXSurfaceData::kColorSystem);
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorIndexValueIndex, index);
			this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kColorChangedBit);
		} else {
			this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kColorNotChangedBit));
		}
	} else if ($instanceOf($Color, sg2d->paint)) {
		$var($Color, color, $cast($Color, sg2d->paint));
		int32_t rgb = $nc(color)->getRGB();
		if (($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kColorStateIndex) != OSXSurfaceData::kColorSimple) || (rgb != this->lastPaintRGB)) {
			this->lastPaintRGB = rgb;
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorStateIndex, OSXSurfaceData::kColorSimple);
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorRGBValueIndex, rgb);
			this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kColorChangedBit);
		} else {
			this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kColorNotChangedBit));
		}
	} else if ($instanceOf($GradientPaint, sg2d->paint)) {
		if (($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kColorStateIndex) != OSXSurfaceData::kColorGradient) || (this->lastPaint != sg2d->paint)) {
			$var($GradientPaint, color, $cast($GradientPaint, sg2d->paint));
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorStateIndex, OSXSurfaceData::kColorGradient);
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorRGBValue1Index, $nc($($nc(color)->getColor1()))->getRGB());
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorRGBValue2Index, $nc($($nc(color)->getColor2()))->getRGB());
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorIsCyclicIndex, ($nc(color)->isCyclic()) ? OSXSurfaceData::kColorCyclic : OSXSurfaceData::kColorNonCyclic);
			$var($Point2D, p, $nc(color)->getPoint1());
			$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColorx1Index, (float)$nc(p)->getX());
			$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColory1Index, (float)$nc(p)->getY());
			$assign(p, color->getPoint2());
			$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColorx2Index, (float)$nc(p)->getX());
			$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColory2Index, (float)$nc(p)->getY());
			this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kColorChangedBit);
		} else {
			this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kColorNotChangedBit));
		}
	} else if ($instanceOf($LinearGradientPaint, sg2d->paint)) {
		$var($LinearGradientPaint, color, $cast($LinearGradientPaint, sg2d->paint));
		$init($MultipleGradientPaint$CycleMethod);
		if ($nc(color)->getCycleMethod() == $MultipleGradientPaint$CycleMethod::NO_CYCLE) {
			if (($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kColorStateIndex) != OSXSurfaceData::kColorLinearGradient) || (this->lastPaint != sg2d->paint)) {
				$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorStateIndex, OSXSurfaceData::kColorLinearGradient);
				int32_t numColor = $nc($(color->getColors()))->length;
				$var($ints, colorArray, $new($ints, numColor));
				for (int32_t i = 0; i < numColor; ++i) {
					colorArray->set(i, $nc($nc($(color->getColors()))->get(i))->getRGB());
				}
				$nc(this->fGraphicsStatesObject)->set(OSXSurfaceData::kColorArrayIndex, colorArray);
				int32_t numFractions = $nc($(color->getFractions()))->length;
				$var($floats, fractionArray, $new($floats, numFractions));
				for (int32_t i = 0; i < numFractions; ++i) {
					fractionArray->set(i, $nc($(color->getFractions()))->get(i));
				}
				$nc(this->fGraphicsStatesObject)->set(OSXSurfaceData::kFractionsArrayIndex, $(color->getFractions()));
				$var($Point2D, p, color->getStartPoint());
				$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColorx1Index, (float)$nc(p)->getX());
				$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColory1Index, (float)$nc(p)->getY());
				$assign(p, color->getEndPoint());
				$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColorx2Index, (float)$nc(p)->getX());
				$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColory2Index, (float)$nc(p)->getY());
				this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kColorChangedBit);
			} else {
				this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kColorNotChangedBit));
			}
		} else {
			setGradientViaRasterPath(sg2d);
		}
	} else if ($instanceOf($RadialGradientPaint, sg2d->paint)) {
		$var($RadialGradientPaint, color, $cast($RadialGradientPaint, sg2d->paint));
		$init($MultipleGradientPaint$CycleMethod);
		if ($nc(color)->getCycleMethod() == $MultipleGradientPaint$CycleMethod::NO_CYCLE) {
			if (($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kColorStateIndex) != OSXSurfaceData::kColorRadialGradient) || (this->lastPaint != sg2d->paint)) {
				$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorStateIndex, OSXSurfaceData::kColorRadialGradient);
				int32_t numColor = $nc($(color->getColors()))->length;
				$var($ints, colorArray, $new($ints, numColor));
				for (int32_t i = 0; i < numColor; ++i) {
					colorArray->set(i, $nc($nc($(color->getColors()))->get(i))->getRGB());
				}
				$nc(this->fGraphicsStatesObject)->set(OSXSurfaceData::kColorArrayIndex, colorArray);
				int32_t numStops = $nc($(color->getFractions()))->length;
				$var($floats, stopsArray, $new($floats, numStops));
				for (int32_t i = 0; i < numStops; ++i) {
					stopsArray->set(i, $nc($(color->getFractions()))->get(i));
				}
				$nc(this->fGraphicsStatesObject)->set(OSXSurfaceData::kFractionsArrayIndex, $(color->getFractions()));
				$var($Point2D, p, color->getFocusPoint());
				$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColorx1Index, (float)$nc(p)->getX());
				$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColory1Index, (float)$nc(p)->getY());
				$assign(p, color->getCenterPoint());
				$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColorx2Index, (float)$nc(p)->getX());
				$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColory2Index, (float)$nc(p)->getY());
				$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kRadiusIndex, color->getRadius());
				this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kColorChangedBit);
			} else {
				this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kColorNotChangedBit));
			}
		} else {
			setGradientViaRasterPath(sg2d);
		}
	} else if ($instanceOf($TexturePaint, sg2d->paint)) {
		if (($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kColorStateIndex) != OSXSurfaceData::kColorTexture) || (this->lastPaint != sg2d->paint)) {
			$var($TexturePaint, color, $cast($TexturePaint, sg2d->paint));
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorStateIndex, OSXSurfaceData::kColorTexture);
			$set(this, texturePaintImage, $nc(color)->getImage());
			$var($SurfaceData, textureSurfaceData, $OSXOffScreenSurfaceData::createNewSurface(this->texturePaintImage));
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorWidthIndex, $nc(this->texturePaintImage)->getWidth());
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kColorHeightIndex, $nc(this->texturePaintImage)->getHeight());
			$var($Rectangle2D, anchor, color->getAnchorRect());
			$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColortxIndex, (float)$nc(anchor)->getX());
			$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColortyIndex, (float)$nc(anchor)->getY());
			double var$0 = $nc(anchor)->getWidth();
			$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColorsxIndex, (float)(var$0 / $nc(this->texturePaintImage)->getWidth()));
			double var$1 = $nc(anchor)->getHeight();
			$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kColorsyIndex, (float)(var$1 / $nc(this->texturePaintImage)->getHeight()));
			$nc(this->fGraphicsStatesObject)->set(OSXSurfaceData::kTextureImageIndex, textureSurfaceData);
			this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kColorChangedBit);
		} else {
			this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kColorNotChangedBit));
		}
	} else {
		setGradientViaRasterPath(sg2d);
	}
	$set(this, lastPaint, $nc(sg2d)->paint);
}

void OSXSurfaceData::setupComposite($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($Composite, composite, $nc(sg2d)->composite);
	if (this->lastComposite != composite) {
		$set(this, lastComposite, composite);
		int32_t alphaRule = $AlphaComposite::SRC_OVER;
		float alphaValue = 1.0f;
		if ((sg2d->compositeState <= $SunGraphics2D::COMP_ALPHA) && (composite != nullptr)) {
			$var($AlphaComposite, alphaComposite, $cast($AlphaComposite, composite));
			alphaRule = alphaComposite->getRule();
			alphaValue = alphaComposite->getAlpha();
		}
		if ((this->lastCompositeAlphaRule != alphaRule) || (this->lastCompositeAlphaValue != alphaValue)) {
			$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kCompositeRuleIndex, alphaRule);
			$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kCompositeValueIndex, alphaValue);
			this->lastCompositeAlphaRule = alphaRule;
			this->lastCompositeAlphaValue = alphaValue;
			this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kCompositeChangedBit);
		} else {
			this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kCompositeNotChangedBit));
		}
	} else {
		this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kCompositeNotChangedBit));
	}
}

void OSXSurfaceData::setupStroke($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($BasicStroke, stroke, OSXSurfaceData::defaultBasicStroke);
	if ($instanceOf($BasicStroke, $nc(sg2d)->stroke)) {
		$assign(stroke, $cast($BasicStroke, sg2d->stroke));
	}
	if (this->lastStroke != stroke) {
		$nc(this->fGraphicsStatesObject)->set(OSXSurfaceData::kStrokeDashArrayIndex, $($nc(stroke)->getDashArray()));
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kStrokeDashPhaseIndex, stroke->getDashPhase());
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kStrokeCapIndex, stroke->getEndCap());
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kStrokeJoinIndex, stroke->getLineJoin());
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kStrokeWidthIndex, stroke->getLineWidth());
		$nc(this->fGraphicsStatesFloat)->put(OSXSurfaceData::kStrokeLimitIndex, stroke->getMiterLimit());
		this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kStrokeChangedBit);
		$set(this, lastStroke, stroke);
	} else {
		this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kStrokeNotChangedBit));
	}
}

void OSXSurfaceData::setupFont($Font* font, $Paint* paint) {
	if (font == nullptr) {
		return;
	}
	if ((font != this->lastFont) || (((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kColorChangedBit)) != 0)) {
		$nc(this->fGraphicsStatesObject)->set(OSXSurfaceData::kFontIndex, font);
		$nc(this->fGraphicsStatesObject)->set(OSXSurfaceData::kFontPaintIndex, paint);
		this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kFontChangedBit);
		$set(this, lastFont, font);
	} else {
		this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kFontNotChangedBit));
	}
}

void OSXSurfaceData::setupRenderingHints($SunGraphics2D* sg2d) {
	bool hintsChanged = false;
	int32_t antialiasHint = $nc(sg2d)->antialiasHint;
	if ($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kHintsAntialiasIndex) != antialiasHint) {
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kHintsAntialiasIndex, antialiasHint);
		hintsChanged = true;
	}
	int32_t textAntialiasHint = sg2d->textAntialiasHint;
	if ($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kHintsTextAntialiasIndex) != textAntialiasHint) {
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kHintsTextAntialiasIndex, textAntialiasHint);
		hintsChanged = true;
	}
	int32_t fractionalMetricsHint = sg2d->fractionalMetricsHint;
	if ($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kHintsFractionalMetricsIndex) != fractionalMetricsHint) {
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kHintsFractionalMetricsIndex, fractionalMetricsHint);
		hintsChanged = true;
	}
	int32_t renderHint = sg2d->renderHint;
	if ($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kHintsRenderingIndex) != renderHint) {
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kHintsRenderingIndex, renderHint);
		hintsChanged = true;
	}
	$init($RenderingHints);
	$var($Object, hintValue, sg2d->getRenderingHint($RenderingHints::KEY_INTERPOLATION));
	int32_t interpolationHint = (hintValue != nullptr ? $nc(($cast($SunHints$Value, hintValue)))->getIndex() : -1);
	if ($nc(this->fGraphicsStatesInt)->get(OSXSurfaceData::kHintsInterpolationIndex) != interpolationHint) {
		$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kHintsInterpolationIndex, interpolationHint);
		hintsChanged = true;
	}
	if (hintsChanged) {
		this->fChangeFlag = (this->fChangeFlag | OSXSurfaceData::kHintsChangedBit);
	} else {
		this->fChangeFlag = ((int32_t)(this->fChangeFlag & (uint32_t)OSXSurfaceData::kHintsNotChangedBit));
	}
}

void OSXSurfaceData::setupGraphicsState($SunGraphics2D* sg2d, int32_t primitiveType) {
	setupGraphicsState(sg2d, primitiveType, $nc(sg2d)->font, 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
}

void OSXSurfaceData::setupGraphicsState($SunGraphics2D* sg2d, int32_t primitiveType, int32_t x, int32_t y, int32_t w, int32_t h) {
	setupGraphicsState(sg2d, primitiveType, $nc(sg2d)->font, x, y, w, h);
}

void OSXSurfaceData::setupGraphicsState($SunGraphics2D* sg2d, int32_t primitiveType, $Font* font, int32_t x, int32_t y, int32_t w, int32_t h) {
	this->fChangeFlag = 0;
	setUserBounds(sg2d, x, y, w, h);
	$var($Thread, thread, $Thread::currentThread());
	if ((this->sg2dCurrent != sg2d) || (this->threadCurrent != thread)) {
		$set(this, sg2dCurrent, sg2d);
		$set(this, threadCurrent, thread);
		setupClip(sg2d);
		setupTransform(sg2d);
		setupPaint(sg2d, x, y, w, h);
		setupComposite(sg2d);
		setupStroke(sg2d);
		setupFont(font, $nc(sg2d)->paint);
		setupRenderingHints(sg2d);
		this->fChangeFlag = OSXSurfaceData::kEverythingChangedFlag;
	} else {
		int32_t rendererType = getRendererTypeForPrimitive(primitiveType);
		setupClip(sg2d);
		setupTransform(sg2d);
		if (rendererType != OSXSurfaceData::kCopyArea) {
			setupComposite(sg2d);
			setupRenderingHints(sg2d);
			if (rendererType != OSXSurfaceData::kImage) {
				setupPaint(sg2d, x, y, w, h);
				setupStroke(sg2d);
			}
			if (rendererType != OSXSurfaceData::kPrimitive) {
				setupFont(font, $nc(sg2d)->paint);
			}
		}
	}
	$nc(this->fGraphicsStatesInt)->put(OSXSurfaceData::kChangeFlagIndex, this->fChangeFlag);
}

bool OSXSurfaceData::isCustomPaint($SunGraphics2D* sg2d) {
	if (($instanceOf($Color, $nc(sg2d)->paint)) || ($instanceOf($SystemColor, $nc(sg2d)->paint)) || ($instanceOf($GradientPaint, $nc(sg2d)->paint)) || ($instanceOf($TexturePaint, $nc(sg2d)->paint))) {
		return false;
	}
	return true;
}

int32_t OSXSurfaceData::getPathLength($GeneralPath* gp) {
	int32_t length = 0;
	$var($PathIterator, pi, $nc(gp)->getPathIterator(nullptr));
	while ($nc(pi)->isDone() == false) {
		pi->next();
		++length;
	}
	return length;
}

int32_t OSXSurfaceData::getPathCoordinates($GeneralPath* gp, $FloatBuffer* coordinates, $IntBuffer* types) {
	bool skip = false;
	$nc(coordinates)->clear();
	$nc(types)->clear();
	int32_t type = 0;
	$var($PathIterator, pi, $nc(gp)->getPathIterator(nullptr));
	while ($nc(pi)->isDone() == false) {
		skip = false;
		type = pi->currentSegment(this->segmentCoordinatesArray);
		switch (type) {
		case $PathIterator::SEG_MOVETO:
			{
				if ($nc(this->segmentCoordinatesArray)->get(0) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(0) > OSXSurfaceData::LOWER_BND && $nc(this->segmentCoordinatesArray)->get(1) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(1) > OSXSurfaceData::LOWER_BND) {
					coordinates->put($nc(this->segmentCoordinatesArray)->get(0));
					coordinates->put($nc(this->segmentCoordinatesArray)->get(1));
				} else {
					skip = true;
				}
				break;
			}
		case $PathIterator::SEG_LINETO:
			{
				if ($nc(this->segmentCoordinatesArray)->get(0) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(0) > OSXSurfaceData::LOWER_BND && $nc(this->segmentCoordinatesArray)->get(1) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(1) > OSXSurfaceData::LOWER_BND) {
					coordinates->put($nc(this->segmentCoordinatesArray)->get(0));
					coordinates->put($nc(this->segmentCoordinatesArray)->get(1));
				} else {
					skip = true;
				}
				break;
			}
		case $PathIterator::SEG_QUADTO:
			{
				if ($nc(this->segmentCoordinatesArray)->get(0) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(0) > OSXSurfaceData::LOWER_BND && $nc(this->segmentCoordinatesArray)->get(1) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(1) > OSXSurfaceData::LOWER_BND && $nc(this->segmentCoordinatesArray)->get(2) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(2) > OSXSurfaceData::LOWER_BND && $nc(this->segmentCoordinatesArray)->get(3) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(3) > OSXSurfaceData::LOWER_BND) {
					coordinates->put($nc(this->segmentCoordinatesArray)->get(0));
					coordinates->put($nc(this->segmentCoordinatesArray)->get(1));
					coordinates->put($nc(this->segmentCoordinatesArray)->get(2));
					coordinates->put($nc(this->segmentCoordinatesArray)->get(3));
				} else {
					skip = true;
				}
				break;
			}
		case $PathIterator::SEG_CUBICTO:
			{
				if ($nc(this->segmentCoordinatesArray)->get(0) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(0) > OSXSurfaceData::LOWER_BND && $nc(this->segmentCoordinatesArray)->get(1) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(1) > OSXSurfaceData::LOWER_BND && $nc(this->segmentCoordinatesArray)->get(2) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(2) > OSXSurfaceData::LOWER_BND && $nc(this->segmentCoordinatesArray)->get(3) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(3) > OSXSurfaceData::LOWER_BND && $nc(this->segmentCoordinatesArray)->get(4) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(4) > OSXSurfaceData::LOWER_BND && $nc(this->segmentCoordinatesArray)->get(5) < OSXSurfaceData::UPPER_BND && $nc(this->segmentCoordinatesArray)->get(5) > OSXSurfaceData::LOWER_BND) {
					coordinates->put($nc(this->segmentCoordinatesArray)->get(0));
					coordinates->put($nc(this->segmentCoordinatesArray)->get(1));
					coordinates->put($nc(this->segmentCoordinatesArray)->get(2));
					coordinates->put($nc(this->segmentCoordinatesArray)->get(3));
					coordinates->put($nc(this->segmentCoordinatesArray)->get(4));
					coordinates->put($nc(this->segmentCoordinatesArray)->get(5));
				} else {
					skip = true;
				}
				break;
			}
		case $PathIterator::SEG_CLOSE:
			{
				break;
			}
		}
		if (!skip) {
			types->put(type);
		}
		pi->next();
	}
	return $nc(pi)->getWindingRule();
}

void OSXSurfaceData::doLine($CRenderer* renderer, $SunGraphics2D* sg2d, float x1, float y1, float x2, float y2) {
	setupGraphicsState(sg2d, OSXSurfaceData::kLine, $nc(sg2d)->font, 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
	$nc(renderer)->doLine(this, x1, y1, x2, y2);
}

void OSXSurfaceData::doRect($CRenderer* renderer, $SunGraphics2D* sg2d, float x, float y, float width, float height, bool isfill) {
	if ((isfill) && (isCustomPaint(sg2d))) {
		setupGraphicsState(sg2d, OSXSurfaceData::kRect, $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, width), $cast(int32_t, height));
	} else {
		setupGraphicsState(sg2d, OSXSurfaceData::kRect, $nc(sg2d)->font, 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
	}
	$nc(renderer)->doRect(this, x, y, width, height, isfill);
}

void OSXSurfaceData::doRoundRect($CRenderer* renderer, $SunGraphics2D* sg2d, float x, float y, float width, float height, float arcW, float arcH, bool isfill) {
	if ((isfill) && (isCustomPaint(sg2d))) {
		setupGraphicsState(sg2d, OSXSurfaceData::kRoundRect, $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, width), $cast(int32_t, height));
	} else {
		setupGraphicsState(sg2d, OSXSurfaceData::kRoundRect, $nc(sg2d)->font, 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
	}
	$nc(renderer)->doRoundRect(this, x, y, width, height, arcW, arcH, isfill);
}

void OSXSurfaceData::doOval($CRenderer* renderer, $SunGraphics2D* sg2d, float x, float y, float width, float height, bool isfill) {
	if ((isfill) && (isCustomPaint(sg2d))) {
		setupGraphicsState(sg2d, OSXSurfaceData::kOval, $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, width), $cast(int32_t, height));
	} else {
		setupGraphicsState(sg2d, OSXSurfaceData::kOval, $nc(sg2d)->font, 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
	}
	$nc(renderer)->doOval(this, x, y, width, height, isfill);
}

void OSXSurfaceData::doArc($CRenderer* renderer, $SunGraphics2D* sg2d, float x, float y, float width, float height, float startAngle, float arcAngle, int32_t type, bool isfill) {
	if ((isfill) && (isCustomPaint(sg2d))) {
		setupGraphicsState(sg2d, OSXSurfaceData::kArc, $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, width), $cast(int32_t, height));
	} else {
		setupGraphicsState(sg2d, OSXSurfaceData::kArc, $nc(sg2d)->font, 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
	}
	$nc(renderer)->doArc(this, x, y, width, height, startAngle, arcAngle, type, isfill);
}

void OSXSurfaceData::doPolygon($CRenderer* renderer, $SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints, bool ispolygon, bool isfill) {
	if ((isfill) && (isCustomPaint(sg2d))) {
		int32_t minx = $nc(xpoints)->get(0);
		int32_t miny = $nc(ypoints)->get(0);
		int32_t maxx = minx;
		int32_t maxy = miny;
		for (int32_t i = 1; i < npoints; ++i) {
			int32_t x = xpoints->get(i);
			if (x < minx) {
				minx = x;
			} else if (x > maxx) {
				maxx = x;
			}
			int32_t y = ypoints->get(i);
			if (y < miny) {
				miny = y;
			} else if (y > maxy) {
				maxy = y;
			}
		}
		setupGraphicsState(sg2d, OSXSurfaceData::kPolygon, minx, miny, maxx - minx, maxy - miny);
	} else {
		setupGraphicsState(sg2d, OSXSurfaceData::kPolygon, $nc(sg2d)->font, 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
	}
	$nc(renderer)->doPoly(this, xpoints, ypoints, npoints, ispolygon, isfill);
}

void OSXSurfaceData::drawfillShape($CRenderer* renderer, $SunGraphics2D* sg2d, $GeneralPath* gp, bool isfill, bool shouldApplyOffset) {
	$useLocalCurrentObjectStackCache();
	if ((isfill) && (isCustomPaint(sg2d))) {
		$var($Rectangle, bounds, $nc(gp)->getBounds());
		setupGraphicsState(sg2d, OSXSurfaceData::kShape, $nc(bounds)->x, bounds->y, bounds->width, bounds->height);
	} else {
		setupGraphicsState(sg2d, OSXSurfaceData::kShape, $nc(sg2d)->font, 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
	}
	int32_t shapeLength = getPathLength(gp);
	if ((this->shapeCoordinatesArray == nullptr) || ($nc(this->shapeCoordinatesArray)->capacity() < (shapeLength * 6))) {
		$set(this, shapeCoordinatesArray, $nc($(getBufferOfSize(shapeLength * 6)))->asFloatBuffer());
	}
	if ((this->shapeTypesArray == nullptr) || ($nc(this->shapeTypesArray)->capacity() < shapeLength)) {
		$set(this, shapeTypesArray, $nc($(getBufferOfSize(shapeLength)))->asIntBuffer());
	}
	int32_t windingRule = getPathCoordinates(gp, this->shapeCoordinatesArray, this->shapeTypesArray);
	$nc(renderer)->doShape(this, shapeLength, this->shapeCoordinatesArray, this->shapeTypesArray, windingRule, isfill, shouldApplyOffset);
}

void OSXSurfaceData::blitImage($CRenderer* renderer, $SunGraphics2D* sg2d, $SurfaceData* img$renamed, bool fliph, bool flipv, int32_t sx, int32_t sy, int32_t sw, int32_t sh, int32_t dx, int32_t dy, int32_t dw, int32_t dh, $Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, img, img$renamed);
	$var($OSXOffScreenSurfaceData, osxsd, $cast($OSXOffScreenSurfaceData, img));
	$synchronized($nc(osxsd)->getLockObject()) {
		int32_t w = $nc(osxsd->bim)->getWidth();
		int32_t h = $nc(osxsd->bim)->getHeight();
		setupGraphicsState(sg2d, OSXSurfaceData::kImage, $nc(sg2d)->font, 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
		if (bgColor != nullptr) {
			$assign(img, osxsd->getCopyWithBgColor(bgColor));
		}
		$nc(renderer)->doImage(this, img, fliph, flipv, w, h, sx, sy, sw, sh, dx, dy, dw, dh);
	}
}

void OSXSurfaceData::drawString($CTextPipe* renderer, $SunGraphics2D* sg2d, int64_t nativeStrikePtr, $String* str, double x, double y) {
	if ($nc(str)->length() == 0) {
		return;
	}
	setupGraphicsState(sg2d, OSXSurfaceData::kString, $nc(sg2d)->font, 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
	$nc(renderer)->doDrawString(this, nativeStrikePtr, str, x, y);
}

void OSXSurfaceData::drawGlyphs($CTextPipe* renderer, $SunGraphics2D* sg2d, int64_t nativeStrikePtr, $GlyphVector* gv, float x, float y) {
	setupGraphicsState(sg2d, OSXSurfaceData::kGlyphs, $($nc(gv)->getFont()), 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
	$nc(renderer)->doDrawGlyphs(this, nativeStrikePtr, gv, x, y);
}

void OSXSurfaceData::drawUnicodes($CTextPipe* renderer, $SunGraphics2D* sg2d, int64_t nativeStrikePtr, $chars* unicodes, int32_t offset, int32_t length, float x, float y) {
	setupGraphicsState(sg2d, OSXSurfaceData::kUnicodes, $nc(sg2d)->font, 0, 0, $nc(this->fBounds)->width, $nc(this->fBounds)->height);
	if (length == 1) {
		$nc(renderer)->doOneUnicode(this, nativeStrikePtr, $nc(unicodes)->get(offset), x, y);
	} else {
		$nc(renderer)->doUnicodes(this, nativeStrikePtr, unicodes, offset, length, x, y);
	}
}

void OSXSurfaceData::intersection($Rectangle* r1, $Rectangle* r2, $Rectangle* r3) {
	int32_t tx1 = $nc(r1)->x;
	int32_t ty1 = r1->y;
	int64_t tx2 = tx1 + r1->width;
	int64_t ty2 = ty1 + r1->height;
	int32_t rx1 = $nc(r2)->x;
	int32_t ry1 = r2->y;
	int64_t rx2 = rx1 + r2->width;
	int64_t ry2 = ry1 + r2->height;
	if (tx1 < rx1) {
		tx1 = rx1;
	}
	if (ty1 < ry1) {
		ty1 = ry1;
	}
	if (tx2 > rx2) {
		tx2 = rx2;
	}
	if (ty2 > ry2) {
		ty2 = ry2;
	}
	tx2 -= tx1;
	ty2 -= ty1;
	if (tx2 < $Integer::MIN_VALUE) {
		tx2 = $Integer::MIN_VALUE;
	}
	if (ty2 < $Integer::MIN_VALUE) {
		ty2 = $Integer::MIN_VALUE;
	}
	$nc(r3)->setBounds(tx1, ty1, (int32_t)tx2, (int32_t)ty2);
}

$Rectangle* OSXSurfaceData::clipCopyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	int32_t var$0 = $nc($nc(sg2d)->devClip)->getLoX();
	int32_t var$1 = $nc(sg2d->devClip)->getLoY();
	int32_t var$2 = $nc(sg2d->devClip)->getWidth();
	$nc(this->copyAreaBounds)->setBounds(var$0, var$1, var$2, $nc(sg2d->devClip)->getHeight());
	$nc(this->srcCopyAreaRect)->setBounds(x, y, w, h);
	intersection(this->srcCopyAreaRect, this->copyAreaBounds, this->srcCopyAreaRect);
	if (($nc(this->srcCopyAreaRect)->width <= 0) || ($nc(this->srcCopyAreaRect)->height <= 0)) {
		return nullptr;
	}
	$nc(this->dstCopyAreaRect)->setBounds($nc(this->srcCopyAreaRect)->x + dx, $nc(this->srcCopyAreaRect)->y + dy, $nc(this->srcCopyAreaRect)->width, $nc(this->srcCopyAreaRect)->height);
	intersection(this->dstCopyAreaRect, this->copyAreaBounds, this->dstCopyAreaRect);
	if (($nc(this->dstCopyAreaRect)->width <= 0) || ($nc(this->dstCopyAreaRect)->height <= 0)) {
		return nullptr;
	}
	x = $nc(this->dstCopyAreaRect)->x - dx;
	y = $nc(this->dstCopyAreaRect)->y - dy;
	w = $nc(this->dstCopyAreaRect)->width;
	h = $nc(this->dstCopyAreaRect)->height;
	$nc(this->finalCopyAreaRect)->setBounds(x, y, w, h);
	return this->finalCopyAreaRect;
}

void OSXSurfaceData::markDirty(bool markAsDirty) {
}

bool OSXSurfaceData::canRenderLCDText($SunGraphics2D* sg2d) {
	if ($nc(sg2d)->compositeState <= $SunGraphics2D::COMP_ISCOPY && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR && sg2d->clipState <= $SunGraphics2D::CLIP_RECTANGULAR && sg2d->antialiasHint != $SunHints::INTVAL_ANTIALIAS_ON) {
		return true;
	}
	return false;
}

bool OSXSurfaceData::IsSimpleColor(Object$* c) {
	$init(OSXSurfaceData);
	return (($instanceOf($Color, c)) || ($instanceOf($SystemColor, c)) || ($instanceOf($ColorUIResource, c)));
}

void clinit$OSXSurfaceData($Class* class$) {
	$init($Float);
	OSXSurfaceData::UPPER_BND = $Float::MAX_VALUE / 2.0f;
	OSXSurfaceData::LOWER_BND = -OSXSurfaceData::UPPER_BND;
	$assignStatic(OSXSurfaceData::sQuartzPipe, nullptr);
	$assignStatic(OSXSurfaceData::sCocoaTextPipe, nullptr);
	$assignStatic(OSXSurfaceData::sQuartzCompositePipe, nullptr);
	{
		$assignStatic(OSXSurfaceData::sQuartzPipe, $new($CRenderer));
	}
	$assignStatic(OSXSurfaceData::sIdentityMatrix, $new($AffineTransform));
	$assignStatic(OSXSurfaceData::defaultBasicStroke, $new($BasicStroke));
	{
	}
}

OSXSurfaceData::OSXSurfaceData() {
}

$Class* OSXSurfaceData::load$($String* name, bool initialize) {
	$loadClass(OSXSurfaceData, name, initialize, &_OSXSurfaceData_ClassInfo_, clinit$OSXSurfaceData, allocate$OSXSurfaceData);
	return class$;
}

$Class* OSXSurfaceData::class$ = nullptr;

	} // java2d
} // sun