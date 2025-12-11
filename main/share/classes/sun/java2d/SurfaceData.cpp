#include <sun/java2d/SurfaceData.h>

#include <java/awt/AWTPermission.h>
#include <java/awt/Color.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/lang/SecurityManager.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <sun/awt/SunHints.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/font/FontUtilities.h>
#include <sun/java2d/NullSurfaceData.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <sun/java2d/StateTracker.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData$PixelToPgramLoopConverter.h>
#include <sun/java2d/SurfaceData$PixelToShapeLoopConverter.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/DrawGlyphList.h>
#include <sun/java2d/loops/DrawGlyphListAA.h>
#include <sun/java2d/loops/DrawGlyphListColor.h>
#include <sun/java2d/loops/DrawGlyphListLCD.h>
#include <sun/java2d/loops/DrawLine.h>
#include <sun/java2d/loops/DrawParallelogram.h>
#include <sun/java2d/loops/DrawPath.h>
#include <sun/java2d/loops/DrawPolygons.h>
#include <sun/java2d/loops/DrawRect.h>
#include <sun/java2d/loops/FillParallelogram.h>
#include <sun/java2d/loops/FillPath.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/FillSpans.h>
#include <sun/java2d/loops/FontInfo.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/loops/RenderCache.h>
#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/AAShapePipe.h>
#include <sun/java2d/pipe/AATextRenderer.h>
#include <sun/java2d/pipe/AlphaColorPipe.h>
#include <sun/java2d/pipe/AlphaPaintPipe.h>
#include <sun/java2d/pipe/CompositePipe.h>
#include <sun/java2d/pipe/DrawImage.h>
#include <sun/java2d/pipe/DrawImagePipe.h>
#include <sun/java2d/pipe/GeneralCompositePipe.h>
#include <sun/java2d/pipe/GlyphListLoopPipe.h>
#include <sun/java2d/pipe/GlyphListPipe.h>
#include <sun/java2d/pipe/LCDTextRenderer.h>
#include <sun/java2d/pipe/LoopBasedPipe.h>
#include <sun/java2d/pipe/LoopPipe.h>
#include <sun/java2d/pipe/OutlineTextRenderer.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>
#include <sun/java2d/pipe/PixelToParallelogramConverter.h>
#include <sun/java2d/pipe/PixelToShapeConverter.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <sun/java2d/pipe/SolidTextRenderer.h>
#include <sun/java2d/pipe/SpanClipRenderer.h>
#include <sun/java2d/pipe/SpanShapeRenderer$Composite.h>
#include <sun/java2d/pipe/SpanShapeRenderer.h>
#include <sun/java2d/pipe/TextPipe.h>
#include <sun/java2d/pipe/TextRenderer.h>
#include <jcpp.h>

#undef CLIP_RECTANGULAR
#undef CLIP_SHAPE
#undef COMP_CUSTOM
#undef COMP_ISCOPY
#undef COMP_XOR
#undef INTVAL_ANTIALIAS_ON
#undef INTVAL_TEXT_ANTIALIAS_DEFAULT
#undef INTVAL_TEXT_ANTIALIAS_LCD_HRGB
#undef INTVAL_TEXT_ANTIALIAS_LCD_VRGB
#undef INTVAL_TEXT_ANTIALIAS_OFF
#undef INTVAL_TEXT_ANTIALIAS_ON
#undef LOOP_FOUND
#undef LOOP_NOTFOUND
#undef LOOP_UNKNOWN
#undef OPAQUE
#undef PAINT_ALPHACOLOR
#undef PAINT_CUSTOM
#undef PAINT_GRADIENT
#undef PAINT_LIN_GRADIENT
#undef PAINT_OPAQUECOLOR
#undef PAINT_RAD_GRADIENT
#undef PAINT_TEXTURE
#undef STABLE
#undef STROKE_THIN
#undef TRANSFORM_TRANSLATESCALE
#undef UNCACHED
#undef UNTRACKABLE

using $AWTPermission = ::java::awt::AWTPermission;
using $Color = ::java::awt::Color;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $Transparency = ::java::awt::Transparency;
using $ColorModel = ::java::awt::image::ColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $SunHints = ::sun::awt::SunHints;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $FontUtilities = ::sun::font::FontUtilities;
using $NullSurfaceData = ::sun::java2d::NullSurfaceData;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;
using $StateTracker = ::sun::java2d::StateTracker;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData$PixelToPgramLoopConverter = ::sun::java2d::SurfaceData$PixelToPgramLoopConverter;
using $SurfaceData$PixelToShapeLoopConverter = ::sun::java2d::SurfaceData$PixelToShapeLoopConverter;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $DrawGlyphList = ::sun::java2d::loops::DrawGlyphList;
using $DrawGlyphListAA = ::sun::java2d::loops::DrawGlyphListAA;
using $DrawGlyphListColor = ::sun::java2d::loops::DrawGlyphListColor;
using $DrawGlyphListLCD = ::sun::java2d::loops::DrawGlyphListLCD;
using $DrawLine = ::sun::java2d::loops::DrawLine;
using $DrawParallelogram = ::sun::java2d::loops::DrawParallelogram;
using $DrawPath = ::sun::java2d::loops::DrawPath;
using $DrawPolygons = ::sun::java2d::loops::DrawPolygons;
using $DrawRect = ::sun::java2d::loops::DrawRect;
using $FillParallelogram = ::sun::java2d::loops::FillParallelogram;
using $FillPath = ::sun::java2d::loops::FillPath;
using $FillRect = ::sun::java2d::loops::FillRect;
using $FillSpans = ::sun::java2d::loops::FillSpans;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $RenderCache = ::sun::java2d::loops::RenderCache;
using $RenderLoops = ::sun::java2d::loops::RenderLoops;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $AAShapePipe = ::sun::java2d::pipe::AAShapePipe;
using $AATextRenderer = ::sun::java2d::pipe::AATextRenderer;
using $AlphaColorPipe = ::sun::java2d::pipe::AlphaColorPipe;
using $AlphaPaintPipe = ::sun::java2d::pipe::AlphaPaintPipe;
using $CompositePipe = ::sun::java2d::pipe::CompositePipe;
using $DrawImage = ::sun::java2d::pipe::DrawImage;
using $DrawImagePipe = ::sun::java2d::pipe::DrawImagePipe;
using $GeneralCompositePipe = ::sun::java2d::pipe::GeneralCompositePipe;
using $GlyphListLoopPipe = ::sun::java2d::pipe::GlyphListLoopPipe;
using $GlyphListPipe = ::sun::java2d::pipe::GlyphListPipe;
using $LCDTextRenderer = ::sun::java2d::pipe::LCDTextRenderer;
using $LoopBasedPipe = ::sun::java2d::pipe::LoopBasedPipe;
using $LoopPipe = ::sun::java2d::pipe::LoopPipe;
using $OutlineTextRenderer = ::sun::java2d::pipe::OutlineTextRenderer;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;
using $PixelDrawPipe = ::sun::java2d::pipe::PixelDrawPipe;
using $PixelFillPipe = ::sun::java2d::pipe::PixelFillPipe;
using $PixelToParallelogramConverter = ::sun::java2d::pipe::PixelToParallelogramConverter;
using $PixelToShapeConverter = ::sun::java2d::pipe::PixelToShapeConverter;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;
using $SolidTextRenderer = ::sun::java2d::pipe::SolidTextRenderer;
using $SpanClipRenderer = ::sun::java2d::pipe::SpanClipRenderer;
using $SpanShapeRenderer = ::sun::java2d::pipe::SpanShapeRenderer;
using $SpanShapeRenderer$Composite = ::sun::java2d::pipe::SpanShapeRenderer$Composite;
using $TextPipe = ::sun::java2d::pipe::TextPipe;
using $TextRenderer = ::sun::java2d::pipe::TextRenderer;

namespace sun {
	namespace java2d {

$FieldInfo _SurfaceData_FieldInfo_[] = {
	{"pData", "J", nullptr, $PRIVATE, $field(SurfaceData, pData)},
	{"valid", "Z", nullptr, $PRIVATE, $field(SurfaceData, valid)},
	{"surfaceLost", "Z", nullptr, $PRIVATE, $field(SurfaceData, surfaceLost)},
	{"surfaceType", "Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE, $field(SurfaceData, surfaceType)},
	{"colorModel", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE, $field(SurfaceData, colorModel)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SurfaceData, disposerReferent)},
	{"blitProxyKey", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SurfaceData, blitProxyKey)},
	{"stateDelegate", "Lsun/java2d/StateTrackableDelegate;", nullptr, $PRIVATE, $field(SurfaceData, stateDelegate)},
	{"colorPrimitives", "Lsun/java2d/pipe/LoopPipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, colorPrimitives)},
	{"outlineTextRenderer", "Lsun/java2d/pipe/TextPipe;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceData, outlineTextRenderer)},
	{"solidTextRenderer", "Lsun/java2d/pipe/TextPipe;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceData, solidTextRenderer)},
	{"aaTextRenderer", "Lsun/java2d/pipe/TextPipe;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceData, aaTextRenderer)},
	{"lcdTextRenderer", "Lsun/java2d/pipe/TextPipe;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceData, lcdTextRenderer)},
	{"colorPipe", "Lsun/java2d/pipe/AlphaColorPipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, colorPipe)},
	{"colorViaShape", "Lsun/java2d/pipe/PixelToShapeConverter;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, colorViaShape)},
	{"colorViaPgram", "Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, colorViaPgram)},
	{"colorText", "Lsun/java2d/pipe/TextPipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, colorText)},
	{"clipColorPipe", "Lsun/java2d/pipe/CompositePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, clipColorPipe)},
	{"clipColorText", "Lsun/java2d/pipe/TextPipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, clipColorText)},
	{"AAColorShape", "Lsun/java2d/pipe/AAShapePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AAColorShape)},
	{"AAColorViaShape", "Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AAColorViaShape)},
	{"AAColorViaPgram", "Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AAColorViaPgram)},
	{"AAClipColorShape", "Lsun/java2d/pipe/AAShapePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AAClipColorShape)},
	{"AAClipColorViaShape", "Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AAClipColorViaShape)},
	{"paintPipe", "Lsun/java2d/pipe/CompositePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, paintPipe)},
	{"paintShape", "Lsun/java2d/pipe/SpanShapeRenderer;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, paintShape)},
	{"paintViaShape", "Lsun/java2d/pipe/PixelToShapeConverter;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, paintViaShape)},
	{"paintText", "Lsun/java2d/pipe/TextPipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, paintText)},
	{"clipPaintPipe", "Lsun/java2d/pipe/CompositePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, clipPaintPipe)},
	{"clipPaintText", "Lsun/java2d/pipe/TextPipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, clipPaintText)},
	{"AAPaintShape", "Lsun/java2d/pipe/AAShapePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AAPaintShape)},
	{"AAPaintViaShape", "Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AAPaintViaShape)},
	{"AAClipPaintShape", "Lsun/java2d/pipe/AAShapePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AAClipPaintShape)},
	{"AAClipPaintViaShape", "Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AAClipPaintViaShape)},
	{"compPipe", "Lsun/java2d/pipe/CompositePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, compPipe)},
	{"compShape", "Lsun/java2d/pipe/SpanShapeRenderer;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, compShape)},
	{"compViaShape", "Lsun/java2d/pipe/PixelToShapeConverter;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, compViaShape)},
	{"compText", "Lsun/java2d/pipe/TextPipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, compText)},
	{"clipCompPipe", "Lsun/java2d/pipe/CompositePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, clipCompPipe)},
	{"clipCompText", "Lsun/java2d/pipe/TextPipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, clipCompText)},
	{"AACompShape", "Lsun/java2d/pipe/AAShapePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AACompShape)},
	{"AACompViaShape", "Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AACompViaShape)},
	{"AAClipCompShape", "Lsun/java2d/pipe/AAShapePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AAClipCompShape)},
	{"AAClipCompViaShape", "Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, AAClipCompViaShape)},
	{"imagepipe", "Lsun/java2d/pipe/DrawImagePipe;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SurfaceData, imagepipe)},
	{"LOOP_UNKNOWN", "I", nullptr, $STATIC | $FINAL, $constField(SurfaceData, LOOP_UNKNOWN)},
	{"LOOP_FOUND", "I", nullptr, $STATIC | $FINAL, $constField(SurfaceData, LOOP_FOUND)},
	{"LOOP_NOTFOUND", "I", nullptr, $STATIC | $FINAL, $constField(SurfaceData, LOOP_NOTFOUND)},
	{"haveLCDLoop", "I", nullptr, 0, $field(SurfaceData, haveLCDLoop)},
	{"havePgramXORLoop", "I", nullptr, 0, $field(SurfaceData, havePgramXORLoop)},
	{"havePgramSolidLoop", "I", nullptr, 0, $field(SurfaceData, havePgramSolidLoop)},
	{"loopcache", "Lsun/java2d/loops/RenderCache;", nullptr, $PRIVATE | $STATIC, $staticField(SurfaceData, loopcache)},
	{"compPermission", "Ljava/security/Permission;", nullptr, $STATIC, $staticField(SurfaceData, compPermission)},
	{}
};

$MethodInfo _SurfaceData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;)V", nullptr, $PROTECTED, $method(static_cast<void(SurfaceData::*)($SurfaceType*,$ColorModel*)>(&SurfaceData::init$))},
	{"<init>", "(Lsun/java2d/StateTrackable$State;Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;)V", nullptr, $PROTECTED, $method(static_cast<void(SurfaceData::*)($StateTrackable$State*,$SurfaceType*,$ColorModel*)>(&SurfaceData::init$))},
	{"<init>", "(Lsun/java2d/StateTrackableDelegate;Lsun/java2d/loops/SurfaceType;Ljava/awt/image/ColorModel;)V", nullptr, $PROTECTED, $method(static_cast<void(SurfaceData::*)($StateTrackableDelegate*,$SurfaceType*,$ColorModel*)>(&SurfaceData::init$))},
	{"<init>", "(Lsun/java2d/StateTrackable$State;)V", nullptr, $PROTECTED, $method(static_cast<void(SurfaceData::*)($StateTrackable$State*)>(&SurfaceData::init$))},
	{"canRenderLCDText", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC},
	{"canRenderParallelograms", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, $PUBLIC},
	{"checkCustomComposite", "()V", nullptr, $PROTECTED},
	{"copyArea", "(Lsun/java2d/SunGraphics2D;IIIIII)Z", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ColorModel*(SurfaceData::*)()>(&SurfaceData::getColorModel))},
	{"getDefaultScaleX", "()D", nullptr, $PUBLIC},
	{"getDefaultScaleY", "()D", nullptr, $PUBLIC},
	{"getDestination", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDisposerReferent", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getFillCompositeType", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/CompositeType;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CompositeType*(*)($SunGraphics2D*)>(&SurfaceData::getFillCompositeType))},
	{"getMaskFill", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/MaskFill;", nullptr, $PROTECTED},
	{"getNativeOps", "()J", nullptr, $PUBLIC},
	{"getPaintSurfaceType", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SurfaceType*(*)($SunGraphics2D*)>(&SurfaceData::getPaintSurfaceType))},
	{"getPrimarySurfaceData", "(Ljava/awt/Image;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SurfaceData*(*)($Image*)>(&SurfaceData::getPrimarySurfaceData))},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRenderLoops", "(Lsun/java2d/SunGraphics2D;)Lsun/java2d/loops/RenderLoops;", nullptr, $PUBLIC},
	{"getReplacement", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSourceSurfaceData", "(Ljava/awt/Image;ILsun/java2d/loops/CompositeType;Ljava/awt/Color;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getState", "()Lsun/java2d/StateTrackable$State;", nullptr, $PUBLIC},
	{"getStateTracker", "()Lsun/java2d/StateTracker;", nullptr, $PUBLIC},
	{"getSurfaceType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SurfaceType*(SurfaceData::*)()>(&SurfaceData::getSurfaceType))},
	{"getTextPipe", "(Lsun/java2d/SunGraphics2D;Z)Lsun/java2d/pipe/TextPipe;", nullptr, $PRIVATE, $method(static_cast<$TextPipe*(SurfaceData::*)($SunGraphics2D*,bool)>(&SurfaceData::getTextPipe))},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&SurfaceData::initIDs))},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isNull", "(Lsun/java2d/SurfaceData;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(SurfaceData*)>(&SurfaceData::isNull))},
	{"isOpaqueGray", "(Ljava/awt/image/IndexColorModel;)Z", nullptr, $PROTECTED | $STATIC | $NATIVE, $method(static_cast<bool(*)($IndexColorModel*)>(&SurfaceData::isOpaqueGray))},
	{"isSurfaceLost", "()Z", nullptr, $PUBLIC},
	{"isValid", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(SurfaceData::*)()>(&SurfaceData::isValid))},
	{"makeConverter", "(Lsun/java2d/pipe/AAShapePipe;Lsun/java2d/pipe/ParallelogramPipe;)Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PixelToParallelogramConverter*(*)($AAShapePipe*,$ParallelogramPipe*)>(&SurfaceData::makeConverter))},
	{"makeConverter", "(Lsun/java2d/pipe/AAShapePipe;)Lsun/java2d/pipe/PixelToParallelogramConverter;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PixelToParallelogramConverter*(*)($AAShapePipe*)>(&SurfaceData::makeConverter))},
	{"makeProxyFor", "(Lsun/java2d/SurfaceData;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC},
	{"makeRenderLoops", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/RenderLoops;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RenderLoops*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&SurfaceData::makeRenderLoops))},
	{"markDirty", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(SurfaceData::*)()>(&SurfaceData::markDirty))},
	{"pixelFor", "(I)I", nullptr, $PUBLIC},
	{"pixelFor", "(Ljava/awt/Color;)I", nullptr, $PUBLIC},
	{"restoreContents", "(Ljava/awt/Image;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SurfaceData*(*)($Image*)>(&SurfaceData::restoreContents))},
	{"rgbFor", "(I)I", nullptr, $PUBLIC},
	{"setBlitProxyKey", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"setSurfaceLost", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"useTightBBoxes", "()Z", nullptr, $PUBLIC},
	{"validatePipe", "(Lsun/java2d/SunGraphics2D;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 34
#define _METHOD_INDEX_isOpaqueGray 37

$InnerClassInfo _SurfaceData_InnerClassesInfo_[] = {
	{"sun.java2d.SurfaceData$PixelToPgramLoopConverter", "sun.java2d.SurfaceData", "PixelToPgramLoopConverter", $STATIC},
	{"sun.java2d.SurfaceData$PixelToShapeLoopConverter", "sun.java2d.SurfaceData", "PixelToShapeLoopConverter", $STATIC},
	{}
};

$ClassInfo _SurfaceData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.SurfaceData",
	"java.lang.Object",
	"java.awt.Transparency,sun.java2d.DisposerTarget,sun.java2d.StateTrackable,sun.java2d.Surface",
	_SurfaceData_FieldInfo_,
	_SurfaceData_MethodInfo_,
	nullptr,
	nullptr,
	_SurfaceData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.SurfaceData$PixelToPgramLoopConverter,sun.java2d.SurfaceData$PixelToShapeLoopConverter"
};

$Object* allocate$SurfaceData($Class* clazz) {
	return $of($alloc(SurfaceData));
}

int32_t SurfaceData::hashCode() {
	 return this->$Transparency::hashCode();
}

bool SurfaceData::equals(Object$* arg0) {
	 return this->$Transparency::equals(arg0);
}

$Object* SurfaceData::clone() {
	 return this->$Transparency::clone();
}

$String* SurfaceData::toString() {
	 return this->$Transparency::toString();
}

void SurfaceData::finalize() {
	this->$Transparency::finalize();
}

$LoopPipe* SurfaceData::colorPrimitives = nullptr;
$TextPipe* SurfaceData::outlineTextRenderer = nullptr;
$TextPipe* SurfaceData::solidTextRenderer = nullptr;
$TextPipe* SurfaceData::aaTextRenderer = nullptr;
$TextPipe* SurfaceData::lcdTextRenderer = nullptr;
$AlphaColorPipe* SurfaceData::colorPipe = nullptr;
$PixelToShapeConverter* SurfaceData::colorViaShape = nullptr;
$PixelToParallelogramConverter* SurfaceData::colorViaPgram = nullptr;
$TextPipe* SurfaceData::colorText = nullptr;
$CompositePipe* SurfaceData::clipColorPipe = nullptr;
$TextPipe* SurfaceData::clipColorText = nullptr;
$AAShapePipe* SurfaceData::AAColorShape = nullptr;
$PixelToParallelogramConverter* SurfaceData::AAColorViaShape = nullptr;
$PixelToParallelogramConverter* SurfaceData::AAColorViaPgram = nullptr;
$AAShapePipe* SurfaceData::AAClipColorShape = nullptr;
$PixelToParallelogramConverter* SurfaceData::AAClipColorViaShape = nullptr;
$CompositePipe* SurfaceData::paintPipe = nullptr;
$SpanShapeRenderer* SurfaceData::paintShape = nullptr;
$PixelToShapeConverter* SurfaceData::paintViaShape = nullptr;
$TextPipe* SurfaceData::paintText = nullptr;
$CompositePipe* SurfaceData::clipPaintPipe = nullptr;
$TextPipe* SurfaceData::clipPaintText = nullptr;
$AAShapePipe* SurfaceData::AAPaintShape = nullptr;
$PixelToParallelogramConverter* SurfaceData::AAPaintViaShape = nullptr;
$AAShapePipe* SurfaceData::AAClipPaintShape = nullptr;
$PixelToParallelogramConverter* SurfaceData::AAClipPaintViaShape = nullptr;
$CompositePipe* SurfaceData::compPipe = nullptr;
$SpanShapeRenderer* SurfaceData::compShape = nullptr;
$PixelToShapeConverter* SurfaceData::compViaShape = nullptr;
$TextPipe* SurfaceData::compText = nullptr;
$CompositePipe* SurfaceData::clipCompPipe = nullptr;
$TextPipe* SurfaceData::clipCompText = nullptr;
$AAShapePipe* SurfaceData::AACompShape = nullptr;
$PixelToParallelogramConverter* SurfaceData::AACompViaShape = nullptr;
$AAShapePipe* SurfaceData::AAClipCompShape = nullptr;
$PixelToParallelogramConverter* SurfaceData::AAClipCompViaShape = nullptr;
$DrawImagePipe* SurfaceData::imagepipe = nullptr;
$RenderCache* SurfaceData::loopcache = nullptr;
$Permission* SurfaceData::compPermission = nullptr;

void SurfaceData::initIDs() {
	$init(SurfaceData);
	$prepareNativeStatic(SurfaceData, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void SurfaceData::init$($SurfaceType* surfaceType, $ColorModel* cm) {
	$init($StateTrackable$State);
	SurfaceData::init$($StateTrackable$State::STABLE, surfaceType, cm);
}

void SurfaceData::init$($StateTrackable$State* state, $SurfaceType* surfaceType, $ColorModel* cm) {
	SurfaceData::init$($($StateTrackableDelegate::createInstance(state)), surfaceType, cm);
}

void SurfaceData::init$($StateTrackableDelegate* trackable, $SurfaceType* surfaceType, $ColorModel* cm) {
	$set(this, disposerReferent, $new($Object));
	$set(this, stateDelegate, trackable);
	$set(this, colorModel, cm);
	$set(this, surfaceType, surfaceType);
	this->valid = true;
}

void SurfaceData::init$($StateTrackable$State* state) {
	$set(this, disposerReferent, $new($Object));
	$set(this, stateDelegate, $StateTrackableDelegate::createInstance(state));
	this->valid = true;
}

void SurfaceData::setBlitProxyKey(Object$* key) {
	if ($SurfaceDataProxy::isCachingAllowed()) {
		$set(this, blitProxyKey, key);
	}
}

SurfaceData* SurfaceData::getSourceSurfaceData($Image* img, int32_t txtype, $CompositeType* comp, $Color* bgColor) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceManager, srcMgr, $SurfaceManager::getManager(img));
	$var(SurfaceData, srcData, $nc(srcMgr)->getPrimarySurfaceData());
	if ($nc(img)->getAccelerationPriority() > 0.0f && this->blitProxyKey != nullptr) {
		$var($SurfaceDataProxy, sdp, $cast($SurfaceDataProxy, srcMgr->getCacheData(this->blitProxyKey)));
		if (sdp == nullptr || !$nc(sdp)->isValid()) {
			$init($StateTrackable$State);
			if ($nc(srcData)->getState() == $StateTrackable$State::UNTRACKABLE) {
				$init($SurfaceDataProxy);
				$assign(sdp, $SurfaceDataProxy::UNCACHED);
			} else {
				$assign(sdp, makeProxyFor(srcData));
			}
			srcMgr->setCacheData(this->blitProxyKey, sdp);
		}
		$assign(srcData, $nc(sdp)->replaceData(srcData, txtype, comp, bgColor));
	}
	return srcData;
}

$SurfaceDataProxy* SurfaceData::makeProxyFor(SurfaceData* srcData) {
	$init($SurfaceDataProxy);
	return $SurfaceDataProxy::UNCACHED;
}

SurfaceData* SurfaceData::getPrimarySurfaceData($Image* img) {
	$init(SurfaceData);
	$var($SurfaceManager, sMgr, $SurfaceManager::getManager(img));
	return $nc(sMgr)->getPrimarySurfaceData();
}

SurfaceData* SurfaceData::restoreContents($Image* img) {
	$init(SurfaceData);
	$var($SurfaceManager, sMgr, $SurfaceManager::getManager(img));
	return $nc(sMgr)->restoreContents();
}

$StateTrackable$State* SurfaceData::getState() {
	return $nc(this->stateDelegate)->getState();
}

$StateTracker* SurfaceData::getStateTracker() {
	return $nc(this->stateDelegate)->getStateTracker();
}

void SurfaceData::markDirty() {
	$nc(this->stateDelegate)->markDirty();
}

void SurfaceData::setSurfaceLost(bool lost) {
	this->surfaceLost = lost;
	$nc(this->stateDelegate)->markDirty();
}

bool SurfaceData::isSurfaceLost() {
	return this->surfaceLost;
}

bool SurfaceData::isValid() {
	return this->valid;
}

$Object* SurfaceData::getDisposerReferent() {
	return $of(this->disposerReferent);
}

int64_t SurfaceData::getNativeOps() {
	return this->pData;
}

void SurfaceData::invalidate() {
	this->valid = false;
	$nc(this->stateDelegate)->markDirty();
}

$PixelToParallelogramConverter* SurfaceData::makeConverter($AAShapePipe* renderer, $ParallelogramPipe* pgrampipe) {
	$init(SurfaceData);
	return $new($PixelToParallelogramConverter, renderer, pgrampipe, 1.0 / 8.0, 0.499, false);
}

$PixelToParallelogramConverter* SurfaceData::makeConverter($AAShapePipe* renderer) {
	$init(SurfaceData);
	return makeConverter(renderer, renderer);
}

bool SurfaceData::canRenderLCDText($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->compositeState <= $SunGraphics2D::COMP_ISCOPY && sg2d->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR && sg2d->clipState <= $SunGraphics2D::CLIP_RECTANGULAR && $nc(sg2d->surfaceData)->getTransparency() == $Transparency::OPAQUE) {
		if (this->haveLCDLoop == SurfaceData::LOOP_UNKNOWN) {
			$init($SurfaceType);
			$init($CompositeType);
			$var($DrawGlyphListLCD, loop, $DrawGlyphListLCD::locate($SurfaceType::AnyColor, $CompositeType::SrcNoEa, $(getSurfaceType())));
			this->haveLCDLoop = (loop != nullptr) ? SurfaceData::LOOP_FOUND : SurfaceData::LOOP_NOTFOUND;
		}
		return this->haveLCDLoop == SurfaceData::LOOP_FOUND;
	}
	return false;
}

bool SurfaceData::canRenderParallelograms($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sg2d)->paintState <= $SunGraphics2D::PAINT_ALPHACOLOR) {
		if (sg2d->compositeState == $SunGraphics2D::COMP_XOR) {
			if (this->havePgramXORLoop == SurfaceData::LOOP_UNKNOWN) {
				$init($SurfaceType);
				$init($CompositeType);
				$var($FillParallelogram, loop, $FillParallelogram::locate($SurfaceType::AnyColor, $CompositeType::Xor, $(getSurfaceType())));
				this->havePgramXORLoop = (loop != nullptr) ? SurfaceData::LOOP_FOUND : SurfaceData::LOOP_NOTFOUND;
			}
			return this->havePgramXORLoop == SurfaceData::LOOP_FOUND;
		} else if (sg2d->compositeState <= $SunGraphics2D::COMP_ISCOPY && sg2d->antialiasHint != $SunHints::INTVAL_ANTIALIAS_ON && sg2d->clipState != $SunGraphics2D::CLIP_SHAPE) {
			if (this->havePgramSolidLoop == SurfaceData::LOOP_UNKNOWN) {
				$init($SurfaceType);
				$init($CompositeType);
				$var($FillParallelogram, loop, $FillParallelogram::locate($SurfaceType::AnyColor, $CompositeType::SrcNoEa, $(getSurfaceType())));
				this->havePgramSolidLoop = (loop != nullptr) ? SurfaceData::LOOP_FOUND : SurfaceData::LOOP_NOTFOUND;
			}
			return this->havePgramSolidLoop == SurfaceData::LOOP_FOUND;
		}
	}
	return false;
}

void SurfaceData::validatePipe($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$set($nc(sg2d), imagepipe, SurfaceData::imagepipe);
	if (sg2d->compositeState == $SunGraphics2D::COMP_XOR) {
		if (sg2d->paintState > $SunGraphics2D::PAINT_ALPHACOLOR) {
			$set(sg2d, drawpipe, SurfaceData::paintViaShape);
			$set(sg2d, fillpipe, SurfaceData::paintViaShape);
			$set(sg2d, shapepipe, SurfaceData::paintShape);
			$set(sg2d, textpipe, SurfaceData::outlineTextRenderer);
		} else {
			$var($PixelToShapeConverter, converter, nullptr);
			if (canRenderParallelograms(sg2d)) {
				$assign(converter, SurfaceData::colorViaPgram);
				$set(sg2d, shapepipe, SurfaceData::colorViaPgram);
			} else {
				$assign(converter, SurfaceData::colorViaShape);
				$set(sg2d, shapepipe, SurfaceData::colorPrimitives);
			}
			if (sg2d->clipState == $SunGraphics2D::CLIP_SHAPE) {
				$set(sg2d, drawpipe, converter);
				$set(sg2d, fillpipe, converter);
				$set(sg2d, textpipe, SurfaceData::outlineTextRenderer);
			} else {
				if (sg2d->transformState >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
					$set(sg2d, drawpipe, converter);
					$set(sg2d, fillpipe, converter);
				} else {
					if (sg2d->strokeState != $SunGraphics2D::STROKE_THIN) {
						$set(sg2d, drawpipe, converter);
					} else {
						$set(sg2d, drawpipe, SurfaceData::colorPrimitives);
					}
					$set(sg2d, fillpipe, SurfaceData::colorPrimitives);
				}
				$set(sg2d, textpipe, SurfaceData::solidTextRenderer);
			}
		}
	} else if (sg2d->compositeState == $SunGraphics2D::COMP_CUSTOM) {
		if (sg2d->antialiasHint == $SunHints::INTVAL_ANTIALIAS_ON) {
			if (sg2d->clipState == $SunGraphics2D::CLIP_SHAPE) {
				$set(sg2d, drawpipe, SurfaceData::AAClipCompViaShape);
				$set(sg2d, fillpipe, SurfaceData::AAClipCompViaShape);
				$set(sg2d, shapepipe, SurfaceData::AAClipCompViaShape);
				$set(sg2d, textpipe, SurfaceData::clipCompText);
			} else {
				$set(sg2d, drawpipe, SurfaceData::AACompViaShape);
				$set(sg2d, fillpipe, SurfaceData::AACompViaShape);
				$set(sg2d, shapepipe, SurfaceData::AACompViaShape);
				$set(sg2d, textpipe, SurfaceData::compText);
			}
		} else {
			$set(sg2d, drawpipe, SurfaceData::compViaShape);
			$set(sg2d, fillpipe, SurfaceData::compViaShape);
			$set(sg2d, shapepipe, SurfaceData::compShape);
			if (sg2d->clipState == $SunGraphics2D::CLIP_SHAPE) {
				$set(sg2d, textpipe, SurfaceData::clipCompText);
			} else {
				$set(sg2d, textpipe, SurfaceData::compText);
			}
		}
	} else if (sg2d->antialiasHint == $SunHints::INTVAL_ANTIALIAS_ON) {
		$set(sg2d, alphafill, getMaskFill(sg2d));
		if (sg2d->alphafill != nullptr) {
			if (sg2d->clipState == $SunGraphics2D::CLIP_SHAPE) {
				$set(sg2d, drawpipe, SurfaceData::AAClipColorViaShape);
				$set(sg2d, fillpipe, SurfaceData::AAClipColorViaShape);
				$set(sg2d, shapepipe, SurfaceData::AAClipColorViaShape);
				$set(sg2d, textpipe, SurfaceData::clipColorText);
			} else {
				$var($PixelToParallelogramConverter, converter, $nc(sg2d->alphafill)->canDoParallelograms() ? SurfaceData::AAColorViaPgram : SurfaceData::AAColorViaShape);
				$set(sg2d, drawpipe, converter);
				$set(sg2d, fillpipe, converter);
				$set(sg2d, shapepipe, converter);
				if (sg2d->paintState > $SunGraphics2D::PAINT_ALPHACOLOR || sg2d->compositeState > $SunGraphics2D::COMP_ISCOPY) {
					$set(sg2d, textpipe, SurfaceData::colorText);
				} else {
					$set(sg2d, textpipe, getTextPipe(sg2d, true));
				}
			}
		} else if (sg2d->clipState == $SunGraphics2D::CLIP_SHAPE) {
			$set(sg2d, drawpipe, SurfaceData::AAClipPaintViaShape);
			$set(sg2d, fillpipe, SurfaceData::AAClipPaintViaShape);
			$set(sg2d, shapepipe, SurfaceData::AAClipPaintViaShape);
			$set(sg2d, textpipe, SurfaceData::clipPaintText);
		} else {
			$set(sg2d, drawpipe, SurfaceData::AAPaintViaShape);
			$set(sg2d, fillpipe, SurfaceData::AAPaintViaShape);
			$set(sg2d, shapepipe, SurfaceData::AAPaintViaShape);
			$set(sg2d, textpipe, SurfaceData::paintText);
		}
	} else if (sg2d->paintState > $SunGraphics2D::PAINT_ALPHACOLOR || sg2d->compositeState > $SunGraphics2D::COMP_ISCOPY || sg2d->clipState == $SunGraphics2D::CLIP_SHAPE) {
		$set(sg2d, drawpipe, SurfaceData::paintViaShape);
		$set(sg2d, fillpipe, SurfaceData::paintViaShape);
		$set(sg2d, shapepipe, SurfaceData::paintShape);
		$set(sg2d, alphafill, getMaskFill(sg2d));
		if (sg2d->alphafill != nullptr) {
			if (sg2d->clipState == $SunGraphics2D::CLIP_SHAPE) {
				$set(sg2d, textpipe, SurfaceData::clipColorText);
			} else {
				$set(sg2d, textpipe, SurfaceData::colorText);
			}
		} else if (sg2d->clipState == $SunGraphics2D::CLIP_SHAPE) {
			$set(sg2d, textpipe, SurfaceData::clipPaintText);
		} else {
			$set(sg2d, textpipe, SurfaceData::paintText);
		}
	} else {
		$var($PixelToShapeConverter, converter, nullptr);
		if (canRenderParallelograms(sg2d)) {
			$assign(converter, SurfaceData::colorViaPgram);
			$set(sg2d, shapepipe, SurfaceData::colorViaPgram);
		} else {
			$assign(converter, SurfaceData::colorViaShape);
			$set(sg2d, shapepipe, SurfaceData::colorPrimitives);
		}
		if (sg2d->transformState >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
			$set(sg2d, drawpipe, converter);
			$set(sg2d, fillpipe, converter);
		} else {
			if (sg2d->strokeState != $SunGraphics2D::STROKE_THIN) {
				$set(sg2d, drawpipe, converter);
			} else {
				$set(sg2d, drawpipe, SurfaceData::colorPrimitives);
			}
			$set(sg2d, fillpipe, SurfaceData::colorPrimitives);
		}
		$set(sg2d, textpipe, getTextPipe(sg2d, false));
	}
	if ($instanceOf($LoopBasedPipe, sg2d->textpipe) || $instanceOf($LoopBasedPipe, sg2d->shapepipe) || $instanceOf($LoopBasedPipe, sg2d->fillpipe) || $instanceOf($LoopBasedPipe, sg2d->drawpipe) || $instanceOf($LoopBasedPipe, sg2d->imagepipe)) {
		$set(sg2d, loops, getRenderLoops(sg2d));
	}
}

$TextPipe* SurfaceData::getTextPipe($SunGraphics2D* sg2d, bool aaHintIsOn) {
	switch ($nc(sg2d)->textAntialiasHint) {
	case $SunHints::INTVAL_TEXT_ANTIALIAS_DEFAULT:
		{
			if (aaHintIsOn) {
				return SurfaceData::aaTextRenderer;
			} else {
				return SurfaceData::solidTextRenderer;
			}
		}
	case $SunHints::INTVAL_TEXT_ANTIALIAS_OFF:
		{
			return SurfaceData::solidTextRenderer;
		}
	case $SunHints::INTVAL_TEXT_ANTIALIAS_ON:
		{
			return SurfaceData::aaTextRenderer;
		}
	default:
		{
			switch ($nc($(sg2d->getFontInfo()))->aaHint) {
			case $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_HRGB:
				{}
			case $SunHints::INTVAL_TEXT_ANTIALIAS_LCD_VRGB:
				{
					return SurfaceData::lcdTextRenderer;
				}
			case $SunHints::INTVAL_TEXT_ANTIALIAS_ON:
				{
					return SurfaceData::aaTextRenderer;
				}
			case $SunHints::INTVAL_TEXT_ANTIALIAS_OFF:
				{
					return SurfaceData::solidTextRenderer;
				}
			default:
				{
					if (aaHintIsOn) {
						return SurfaceData::aaTextRenderer;
					} else {
						return SurfaceData::solidTextRenderer;
					}
				}
			}
		}
	}
}

$SurfaceType* SurfaceData::getPaintSurfaceType($SunGraphics2D* sg2d) {
	$init(SurfaceData);
	switch ($nc(sg2d)->paintState) {
	case $SunGraphics2D::PAINT_OPAQUECOLOR:
		{
			$init($SurfaceType);
			return $SurfaceType::OpaqueColor;
		}
	case $SunGraphics2D::PAINT_ALPHACOLOR:
		{
			$init($SurfaceType);
			return $SurfaceType::AnyColor;
		}
	case $SunGraphics2D::PAINT_GRADIENT:
		{
			if ($nc(sg2d->paint)->getTransparency() == $Transparency::OPAQUE) {
				$init($SurfaceType);
				return $SurfaceType::OpaqueGradientPaint;
			} else {
				$init($SurfaceType);
				return $SurfaceType::GradientPaint;
			}
		}
	case $SunGraphics2D::PAINT_LIN_GRADIENT:
		{
			if ($nc(sg2d->paint)->getTransparency() == $Transparency::OPAQUE) {
				$init($SurfaceType);
				return $SurfaceType::OpaqueLinearGradientPaint;
			} else {
				$init($SurfaceType);
				return $SurfaceType::LinearGradientPaint;
			}
		}
	case $SunGraphics2D::PAINT_RAD_GRADIENT:
		{
			if ($nc(sg2d->paint)->getTransparency() == $Transparency::OPAQUE) {
				$init($SurfaceType);
				return $SurfaceType::OpaqueRadialGradientPaint;
			} else {
				$init($SurfaceType);
				return $SurfaceType::RadialGradientPaint;
			}
		}
	case $SunGraphics2D::PAINT_TEXTURE:
		{
			if ($nc(sg2d->paint)->getTransparency() == $Transparency::OPAQUE) {
				$init($SurfaceType);
				return $SurfaceType::OpaqueTexturePaint;
			} else {
				$init($SurfaceType);
				return $SurfaceType::TexturePaint;
			}
		}
	default:
		{}
	case $SunGraphics2D::PAINT_CUSTOM:
		{
			$init($SurfaceType);
			return $SurfaceType::AnyPaint;
		}
	}
}

$CompositeType* SurfaceData::getFillCompositeType($SunGraphics2D* sg2d) {
	$init(SurfaceData);
	$var($CompositeType, compType, $nc(sg2d)->imageComp);
	if (sg2d->compositeState == $SunGraphics2D::COMP_ISCOPY) {
		$init($CompositeType);
		if (compType == $CompositeType::SrcOverNoEa) {
			$assign(compType, $CompositeType::OpaqueSrcOverNoEa);
		} else {
			$assign(compType, $CompositeType::SrcNoEa);
		}
	}
	return compType;
}

$MaskFill* SurfaceData::getMaskFill($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, src, getPaintSurfaceType(sg2d));
	$var($CompositeType, comp, getFillCompositeType(sg2d));
	$var($SurfaceType, dst, getSurfaceType());
	return $MaskFill::getFromCache(src, comp, dst);
}

$RenderLoops* SurfaceData::getRenderLoops($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, src, getPaintSurfaceType(sg2d));
	$var($CompositeType, comp, getFillCompositeType(sg2d));
	$var($SurfaceType, dst, $nc($($nc(sg2d)->getSurfaceData()))->getSurfaceType());
	$var($Object, o, $nc(SurfaceData::loopcache)->get(src, comp, dst));
	if (o != nullptr) {
		return $cast($RenderLoops, o);
	}
	$var($RenderLoops, loops, makeRenderLoops(src, comp, dst));
	$nc(SurfaceData::loopcache)->put(src, comp, dst, loops);
	return loops;
}

$RenderLoops* SurfaceData::makeRenderLoops($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst) {
	$init(SurfaceData);
	$var($RenderLoops, loops, $new($RenderLoops));
	$set(loops, drawLineLoop, $DrawLine::locate(src, comp, dst));
	$set(loops, fillRectLoop, $FillRect::locate(src, comp, dst));
	$set(loops, drawRectLoop, $DrawRect::locate(src, comp, dst));
	$set(loops, drawPolygonsLoop, $DrawPolygons::locate(src, comp, dst));
	$set(loops, drawPathLoop, $DrawPath::locate(src, comp, dst));
	$set(loops, fillPathLoop, $FillPath::locate(src, comp, dst));
	$set(loops, fillSpansLoop, $FillSpans::locate(src, comp, dst));
	$set(loops, fillParallelogramLoop, $FillParallelogram::locate(src, comp, dst));
	$set(loops, drawParallelogramLoop, $DrawParallelogram::locate(src, comp, dst));
	$set(loops, drawGlyphListLoop, $DrawGlyphList::locate(src, comp, dst));
	$set(loops, drawGlyphListAALoop, $DrawGlyphListAA::locate(src, comp, dst));
	$set(loops, drawGlyphListLCDLoop, $DrawGlyphListLCD::locate(src, comp, dst));
	$set(loops, drawGlyphListColorLoop, $DrawGlyphListColor::locate(src, comp, dst));
	return loops;
}

$SurfaceType* SurfaceData::getSurfaceType() {
	return this->surfaceType;
}

$ColorModel* SurfaceData::getColorModel() {
	return this->colorModel;
}

int32_t SurfaceData::getTransparency() {
	return $nc($(getColorModel()))->getTransparency();
}

bool SurfaceData::useTightBBoxes() {
	return true;
}

int32_t SurfaceData::pixelFor(int32_t rgb) {
	return $nc(this->surfaceType)->pixelFor(rgb, this->colorModel);
}

int32_t SurfaceData::pixelFor($Color* c) {
	return pixelFor($nc(c)->getRGB());
}

int32_t SurfaceData::rgbFor(int32_t pixel) {
	return $nc(this->surfaceType)->rgbFor(pixel, this->colorModel);
}

void SurfaceData::checkCustomComposite() {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		if (SurfaceData::compPermission == nullptr) {
			$assignStatic(SurfaceData::compPermission, $new($AWTPermission, "readDisplayPixels"_s));
		}
		sm->checkPermission(SurfaceData::compPermission);
	}
}

bool SurfaceData::isOpaqueGray($IndexColorModel* icm) {
	$init(SurfaceData);
	bool $ret = false;
	$prepareNativeStatic(SurfaceData, isOpaqueGray, bool, $IndexColorModel* icm);
	$ret = $invokeNativeStatic(icm);
	$finishNativeStatic();
	return $ret;
}

bool SurfaceData::isNull(SurfaceData* sd) {
	$init(SurfaceData);
	$init($NullSurfaceData);
	if (sd == nullptr || sd == $NullSurfaceData::theInstance) {
		return true;
	}
	return false;
}

bool SurfaceData::copyArea($SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) {
	return false;
}

void SurfaceData::flush() {
}

double SurfaceData::getDefaultScaleX() {
	return (double)1;
}

double SurfaceData::getDefaultScaleY() {
	return (double)1;
}

void clinit$SurfaceData($Class* class$) {
	{
		SurfaceData::initIDs();
	}
	{
		$assignStatic(SurfaceData::colorPrimitives, $new($LoopPipe));
		$assignStatic(SurfaceData::outlineTextRenderer, $new($OutlineTextRenderer));
		$assignStatic(SurfaceData::aaTextRenderer, $new($AATextRenderer));
		$init($FontUtilities);
		if ($FontUtilities::isMacOSX14) {
			$assignStatic(SurfaceData::solidTextRenderer, SurfaceData::aaTextRenderer);
		} else {
			$assignStatic(SurfaceData::solidTextRenderer, $new($SolidTextRenderer));
		}
		$assignStatic(SurfaceData::lcdTextRenderer, $new($LCDTextRenderer));
		$assignStatic(SurfaceData::colorPipe, $new($AlphaColorPipe));
		$assignStatic(SurfaceData::colorViaShape, $new($SurfaceData$PixelToShapeLoopConverter, SurfaceData::colorPrimitives));
		$assignStatic(SurfaceData::colorViaPgram, $new($SurfaceData$PixelToPgramLoopConverter, SurfaceData::colorPrimitives, SurfaceData::colorPrimitives, 1.0, 0.25, true));
		$assignStatic(SurfaceData::colorText, $new($TextRenderer, SurfaceData::colorPipe));
		$assignStatic(SurfaceData::clipColorPipe, $new($SpanClipRenderer, SurfaceData::colorPipe));
		$assignStatic(SurfaceData::clipColorText, $new($TextRenderer, SurfaceData::clipColorPipe));
		$assignStatic(SurfaceData::AAColorShape, $new($AAShapePipe, SurfaceData::colorPipe));
		$assignStatic(SurfaceData::AAColorViaShape, SurfaceData::makeConverter(SurfaceData::AAColorShape));
		$assignStatic(SurfaceData::AAColorViaPgram, SurfaceData::makeConverter(SurfaceData::AAColorShape, SurfaceData::colorPipe));
		$assignStatic(SurfaceData::AAClipColorShape, $new($AAShapePipe, SurfaceData::clipColorPipe));
		$assignStatic(SurfaceData::AAClipColorViaShape, SurfaceData::makeConverter(SurfaceData::AAClipColorShape));
		$assignStatic(SurfaceData::paintPipe, $new($AlphaPaintPipe));
		$assignStatic(SurfaceData::paintShape, $new($SpanShapeRenderer$Composite, SurfaceData::paintPipe));
		$assignStatic(SurfaceData::paintViaShape, $new($PixelToShapeConverter, SurfaceData::paintShape));
		$assignStatic(SurfaceData::paintText, $new($TextRenderer, SurfaceData::paintPipe));
		$assignStatic(SurfaceData::clipPaintPipe, $new($SpanClipRenderer, SurfaceData::paintPipe));
		$assignStatic(SurfaceData::clipPaintText, $new($TextRenderer, SurfaceData::clipPaintPipe));
		$assignStatic(SurfaceData::AAPaintShape, $new($AAShapePipe, SurfaceData::paintPipe));
		$assignStatic(SurfaceData::AAPaintViaShape, SurfaceData::makeConverter(SurfaceData::AAPaintShape));
		$assignStatic(SurfaceData::AAClipPaintShape, $new($AAShapePipe, SurfaceData::clipPaintPipe));
		$assignStatic(SurfaceData::AAClipPaintViaShape, SurfaceData::makeConverter(SurfaceData::AAClipPaintShape));
		$assignStatic(SurfaceData::compPipe, $new($GeneralCompositePipe));
		$assignStatic(SurfaceData::compShape, $new($SpanShapeRenderer$Composite, SurfaceData::compPipe));
		$assignStatic(SurfaceData::compViaShape, $new($PixelToShapeConverter, SurfaceData::compShape));
		$assignStatic(SurfaceData::compText, $new($TextRenderer, SurfaceData::compPipe));
		$assignStatic(SurfaceData::clipCompPipe, $new($SpanClipRenderer, SurfaceData::compPipe));
		$assignStatic(SurfaceData::clipCompText, $new($TextRenderer, SurfaceData::clipCompPipe));
		$assignStatic(SurfaceData::AACompShape, $new($AAShapePipe, SurfaceData::compPipe));
		$assignStatic(SurfaceData::AACompViaShape, SurfaceData::makeConverter(SurfaceData::AACompShape));
		$assignStatic(SurfaceData::AAClipCompShape, $new($AAShapePipe, SurfaceData::clipCompPipe));
		$assignStatic(SurfaceData::AAClipCompViaShape, SurfaceData::makeConverter(SurfaceData::AAClipCompShape));
		$assignStatic(SurfaceData::imagepipe, $new($DrawImage));
	}
	$assignStatic(SurfaceData::loopcache, $new($RenderCache, 30));
}

SurfaceData::SurfaceData() {
}

$Class* SurfaceData::load$($String* name, bool initialize) {
	$loadClass(SurfaceData, name, initialize, &_SurfaceData_ClassInfo_, clinit$SurfaceData, allocate$SurfaceData);
	return class$;
}

$Class* SurfaceData::class$ = nullptr;

	} // java2d
} // sun