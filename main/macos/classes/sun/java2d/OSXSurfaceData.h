#ifndef _sun_java2d_OSXSurfaceData_h_
#define _sun_java2d_OSXSurfaceData_h_
//$ class sun.java2d.OSXSurfaceData
//$ extends sun.awt.image.BufImgSurfaceData

#include <java/lang/Array.h>
#include <java/lang/Float.h>
#include <sun/awt/image/BufImgSurfaceData.h>

#pragma push_macro("LOWER_BND")
#undef LOWER_BND
#pragma push_macro("UPPER_BND")
#undef UPPER_BND

namespace java {
	namespace awt {
		class BasicStroke;
		class Color;
		class Composite;
		class Font;
		class GraphicsConfiguration;
		class Paint;
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class GlyphVector;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class GeneralPath;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ColorModel;
		}
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class FloatBuffer;
		class IntBuffer;
		class LongBuffer;
	}
}
namespace sun {
	namespace java2d {
		class CRenderer;
		class CompositeCRenderer;
		class SunGraphics2D;
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class SurfaceType;
		}
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CTextPipe;
		}
	}
}

namespace sun {
	namespace java2d {

class OSXSurfaceData : public ::sun::awt::image::BufImgSurfaceData {
	$class(OSXSurfaceData, 0, ::sun::awt::image::BufImgSurfaceData)
public:
	OSXSurfaceData();
	using ::sun::awt::image::BufImgSurfaceData::copyArea;
	void init$(::sun::java2d::loops::SurfaceType* sType, ::java::awt::image::ColorModel* cm);
	void init$(::sun::java2d::loops::SurfaceType* sType, ::java::awt::image::ColorModel* cm, ::java::awt::GraphicsConfiguration* config, ::java::awt::Rectangle* bounds);
	static bool IsSimpleColor(Object$* c);
	virtual void blitImage(::sun::java2d::CRenderer* renderer, ::sun::java2d::SunGraphics2D* sg2d, ::sun::java2d::SurfaceData* img, bool fliph, bool flipv, int32_t sx, int32_t sy, int32_t sw, int32_t sh, int32_t dx, int32_t dy, int32_t dw, int32_t dh, ::java::awt::Color* bgColor);
	virtual bool canRenderLCDText(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual void clearRect(::java::awt::image::BufferedImage* bim, int32_t w, int32_t h);
	virtual ::java::awt::Rectangle* clipCopyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy);
	virtual ::java::awt::image::BufferedImage* copyArea(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::image::BufferedImage* image) {return nullptr;}
	virtual void doArc(::sun::java2d::CRenderer* renderer, ::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height, float startAngle, float arcAngle, int32_t type, bool isfill);
	virtual void doLine(::sun::java2d::CRenderer* renderer, ::sun::java2d::SunGraphics2D* sg2d, float x1, float y1, float x2, float y2);
	virtual void doOval(::sun::java2d::CRenderer* renderer, ::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height, bool isfill);
	virtual void doPolygon(::sun::java2d::CRenderer* renderer, ::sun::java2d::SunGraphics2D* sg2d, $ints* xpoints, $ints* ypoints, int32_t npoints, bool ispolygon, bool isfill);
	virtual void doRect(::sun::java2d::CRenderer* renderer, ::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height, bool isfill);
	virtual void doRoundRect(::sun::java2d::CRenderer* renderer, ::sun::java2d::SunGraphics2D* sg2d, float x, float y, float width, float height, float arcW, float arcH, bool isfill);
	virtual void drawGlyphs(::sun::lwawt::macosx::CTextPipe* renderer, ::sun::java2d::SunGraphics2D* sg2d, int64_t nativeStrikePtr, ::java::awt::font::GlyphVector* gv, float x, float y);
	virtual void drawString(::sun::lwawt::macosx::CTextPipe* renderer, ::sun::java2d::SunGraphics2D* sg2d, int64_t nativeStrikePtr, $String* str, double x, double y);
	virtual void drawUnicodes(::sun::lwawt::macosx::CTextPipe* renderer, ::sun::java2d::SunGraphics2D* sg2d, int64_t nativeStrikePtr, $chars* unicodes, int32_t offset, int32_t length, float x, float y);
	virtual void drawfillShape(::sun::java2d::CRenderer* renderer, ::sun::java2d::SunGraphics2D* sg2d, ::java::awt::geom::GeneralPath* gp, bool isfill, bool shouldApplyOffset);
	virtual ::java::awt::Rectangle* getBounds() override;
	static ::java::nio::ByteBuffer* getBufferOfSize(int32_t size);
	virtual ::java::awt::image::BufferedImage* getCompositingDstInImage(int32_t w, int32_t h);
	virtual ::java::awt::image::BufferedImage* getCompositingDstOutImage(int32_t w, int32_t h);
	virtual ::java::awt::image::BufferedImage* getCompositingImage(int32_t w, int32_t h);
	virtual ::java::awt::image::BufferedImage* getCompositingImageSame(::java::awt::image::BufferedImage* img, int32_t w, int32_t h);
	virtual ::java::awt::image::BufferedImage* getCompositingSrcImage(int32_t w, int32_t h);
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	virtual int32_t getPathCoordinates(::java::awt::geom::GeneralPath* gp, ::java::nio::FloatBuffer* coordinates, ::java::nio::IntBuffer* types);
	virtual int32_t getPathLength(::java::awt::geom::GeneralPath* gp);
	static int32_t getRendererTypeForPrimitive(int32_t primitiveType);
	virtual void intersection(::java::awt::Rectangle* r1, ::java::awt::Rectangle* r2, ::java::awt::Rectangle* r3);
	virtual void invalidate() override;
	virtual bool isCustomPaint(::sun::java2d::SunGraphics2D* sg2d);
	using ::sun::awt::image::BufImgSurfaceData::markDirty;
	virtual void markDirty(bool markAsDirty);
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void setGradientViaRasterPath(::sun::java2d::SunGraphics2D* sg2d);
	virtual void setPipesToQuartzComposite(::sun::java2d::SunGraphics2D* sg2d);
	virtual void setUserBounds(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void setupClip(::sun::java2d::SunGraphics2D* sg2d);
	virtual void setupComposite(::sun::java2d::SunGraphics2D* sg2d);
	virtual void setupFont(::java::awt::Font* font, ::java::awt::Paint* paint);
	virtual void setupGraphicsState(::sun::java2d::SunGraphics2D* sg2d, int32_t primitiveType);
	virtual void setupGraphicsState(::sun::java2d::SunGraphics2D* sg2d, int32_t primitiveType, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void setupGraphicsState(::sun::java2d::SunGraphics2D* sg2d, int32_t primitiveType, ::java::awt::Font* font, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void setupPaint(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void setupRenderingHints(::sun::java2d::SunGraphics2D* sg2d);
	virtual void setupStroke(::sun::java2d::SunGraphics2D* sg2d);
	virtual void setupTransform(::sun::java2d::SunGraphics2D* sg2d);
	virtual void validatePipe(::sun::java2d::SunGraphics2D* sg2d) override;
	virtual bool xorSurfacePixels(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::image::BufferedImage* srcPixels, int32_t x, int32_t y, int32_t w, int32_t h, int32_t colorXOR) {return false;}
	static float UPPER_BND;
	static float LOWER_BND;
	static ::sun::java2d::CRenderer* sQuartzPipe;
	static ::sun::lwawt::macosx::CTextPipe* sCocoaTextPipe;
	static ::sun::java2d::CompositeCRenderer* sQuartzCompositePipe;
	::java::awt::GraphicsConfiguration* fConfig = nullptr;
	::java::awt::Rectangle* fBounds = nullptr;
	::java::awt::GraphicsConfiguration* sDefaultGraphicsConfiguration = nullptr;
	::java::awt::image::BufferedImage* sSrcComposite = nullptr;
	::java::awt::image::BufferedImage* sDstInComposite = nullptr;
	::java::awt::image::BufferedImage* sDstOutComposite = nullptr;
	static const int32_t kPrimitive = 0;
	static const int32_t kImage = 1;
	static const int32_t kText = 2;
	static const int32_t kCopyArea = 3;
	static const int32_t kExternal = 4;
	static const int32_t kLine = 5;
	static const int32_t kRect = 6;
	static const int32_t kRoundRect = 7;
	static const int32_t kOval = 8;
	static const int32_t kArc = 9;
	static const int32_t kPolygon = 10;
	static const int32_t kShape = 11;
	static const int32_t kString = 13;
	static const int32_t kGlyphs = 14;
	static const int32_t kUnicodes = 15;
	static const int32_t kCommonParameterCount = 10; // 1 + 1 + 4 + 4
	static const int32_t kLineParametersCount = kCommonParameterCount;
	static const int32_t kRectParametersCount = 11; // kCommonParameterCount + 1
	static const int32_t kRoundRectParametersCount = 13; // kCommonParameterCount + 2 + 1
	static const int32_t kOvalParametersCount = 11; // kCommonParameterCount + 1
	static const int32_t kArcParametersCount = 14; // kCommonParameterCount + 2 + 1 + 1
	static const int32_t kPolygonParametersCount = 0;
	static const int32_t kShapeParametersCount = 0;
	static const int32_t kImageParametersCount = 22; // kCommonParameterCount + 2 + 2 + 4 + 4
	static const int32_t kStringParametersCount = 0;
	static const int32_t kGlyphsParametersCount = 0;
	static const int32_t kUnicodesParametersCount = 0;
	static const int32_t kPixelParametersCount = 0;
	static const int32_t kExternalParametersCount = 0;
	static const int32_t kChangeFlagIndex = 0;
	static const int32_t kBoundsXIndex = 1;
	static const int32_t kBoundsYIndex = 2;
	static const int32_t kBoundsWidthIndex = 3;
	static const int32_t kBoundsHeightIndex = 4;
	static const int32_t kClipStateIndex = 5;
	static const int32_t kClipNumTypesIndex = 6;
	static const int32_t kClipNumCoordsIndex = 7;
	static const int32_t kClipWindingRuleIndex = 8;
	static const int32_t kClipXIndex = 9;
	static const int32_t kClipYIndex = 10;
	static const int32_t kClipWidthIndex = 11;
	static const int32_t kClipHeightIndex = 12;
	static const int32_t kCTMaIndex = 13;
	static const int32_t kCTMbIndex = 14;
	static const int32_t kCTMcIndex = 15;
	static const int32_t kCTMdIndex = 16;
	static const int32_t kCTMtxIndex = 17;
	static const int32_t kCTMtyIndex = 18;
	static const int32_t kColorStateIndex = 19;
	static const int32_t kColorRGBValueIndex = 20;
	static const int32_t kColorIndexValueIndex = 21;
	static const int32_t kColorPointerIndex = 22;
	static const int32_t kColorPointerIndex2 = 23;
	static const int32_t kColorRGBValue1Index = 24;
	static const int32_t kColorWidthIndex = 25;
	static const int32_t kColorRGBValue2Index = 26;
	static const int32_t kColorHeightIndex = 27;
	static const int32_t kColorIsCyclicIndex = 28;
	static const int32_t kColorx1Index = 29;
	static const int32_t kColortxIndex = 30;
	static const int32_t kColory1Index = 31;
	static const int32_t kColortyIndex = 32;
	static const int32_t kColorx2Index = 33;
	static const int32_t kColorsxIndex = 34;
	static const int32_t kColory2Index = 35;
	static const int32_t kColorsyIndex = 36;
	static const int32_t kCompositeRuleIndex = 37;
	static const int32_t kCompositeValueIndex = 38;
	static const int32_t kStrokeJoinIndex = 39;
	static const int32_t kStrokeCapIndex = 40;
	static const int32_t kStrokeWidthIndex = 41;
	static const int32_t kStrokeDashPhaseIndex = 42;
	static const int32_t kStrokeLimitIndex = 43;
	static const int32_t kHintsAntialiasIndex = 44;
	static const int32_t kHintsTextAntialiasIndex = 45;
	static const int32_t kHintsFractionalMetricsIndex = 46;
	static const int32_t kHintsRenderingIndex = 47;
	static const int32_t kHintsInterpolationIndex = 48;
	static const int32_t kRadiusIndex = 49;
	static const int32_t kSizeOfParameters = 50; // kRadiusIndex + 1
	static const int32_t kClipCoordinatesIndex = 0;
	static const int32_t kClipTypesIndex = 1;
	static const int32_t kTextureImageIndex = 2;
	static const int32_t kStrokeDashArrayIndex = 3;
	static const int32_t kFontIndex = 4;
	static const int32_t kFontPaintIndex = 5;
	static const int32_t kColorArrayIndex = 6;
	static const int32_t kFractionsArrayIndex = 7;
	static const int32_t kBoundsChangedBit = 1; // 1 << 0
	static const int32_t kBoundsNotChangedBit = ~kBoundsChangedBit;
	static const int32_t kClipChangedBit = 2; // 1 << 1
	static const int32_t kClipNotChangedBit = ~kClipChangedBit;
	static const int32_t kCTMChangedBit = 4; // 1 << 2
	static const int32_t kCTMNotChangedBit = ~kCTMChangedBit;
	static const int32_t kColorChangedBit = 8; // 1 << 3
	static const int32_t kColorNotChangedBit = ~kColorChangedBit;
	static const int32_t kCompositeChangedBit = 16; // 1 << 4
	static const int32_t kCompositeNotChangedBit = ~kCompositeChangedBit;
	static const int32_t kStrokeChangedBit = 32; // 1 << 5
	static const int32_t kStrokeNotChangedBit = ~kStrokeChangedBit;
	static const int32_t kHintsChangedBit = 64; // 1 << 6
	static const int32_t kHintsNotChangedBit = ~kHintsChangedBit;
	static const int32_t kFontChangedBit = 128; // 1 << 7
	static const int32_t kFontNotChangedBit = ~kFontChangedBit;
	static const int32_t kEverythingChangedFlag = (-1);
	static const int32_t kColorSimple = 0;
	static const int32_t kColorSystem = 1;
	static const int32_t kColorGradient = 2;
	static const int32_t kColorTexture = 3;
	static const int32_t kColorLinearGradient = 4;
	static const int32_t kColorRadialGradient = 5;
	static const int32_t kColorNonCyclic = 0;
	static const int32_t kColorCyclic = 1;
	static const int32_t kClipRect = 0;
	static const int32_t kClipShape = 1;
	int32_t fChangeFlag = 0;
	::java::nio::ByteBuffer* fGraphicsStates = nullptr;
	::java::nio::IntBuffer* fGraphicsStatesInt = nullptr;
	::java::nio::FloatBuffer* fGraphicsStatesFloat = nullptr;
	::java::nio::LongBuffer* fGraphicsStatesLong = nullptr;
	$ObjectArray* fGraphicsStatesObject = nullptr;
	::java::awt::Rectangle* userBounds = nullptr;
	float lastUserX = 0.0;
	float lastUserY = 0.0;
	float lastUserW = 0.0;
	float lastUserH = 0.0;
	::java::nio::FloatBuffer* clipCoordinatesArray = nullptr;
	::java::nio::IntBuffer* clipTypesArray = nullptr;
	::java::awt::Shape* lastClipShape = nullptr;
	float lastClipX = 0.0;
	float lastClipY = 0.0;
	float lastClipW = 0.0;
	float lastClipH = 0.0;
	$doubles* lastCTM = nullptr;
	float lastCTMa = 0.0;
	float lastCTMb = 0.0;
	float lastCTMc = 0.0;
	float lastCTMd = 0.0;
	float lastCTMtx = 0.0;
	float lastCTMty = 0.0;
	static ::java::awt::geom::AffineTransform* sIdentityMatrix;
	::java::awt::Paint* lastPaint = nullptr;
	int64_t lastPaintPtr = 0;
	int32_t lastPaintRGB = 0;
	int32_t lastPaintIndex = 0;
	::java::awt::image::BufferedImage* texturePaintImage = nullptr;
	::java::awt::Composite* lastComposite = nullptr;
	int32_t lastCompositeAlphaRule = 0;
	float lastCompositeAlphaValue = 0.0;
	::java::awt::BasicStroke* lastStroke = nullptr;
	static ::java::awt::BasicStroke* defaultBasicStroke;
	::java::awt::Font* lastFont = nullptr;
	::sun::java2d::SunGraphics2D* sg2dCurrent = nullptr;
	$Thread* threadCurrent = nullptr;
	$floats* segmentCoordinatesArray = nullptr;
	::java::nio::FloatBuffer* shapeCoordinatesArray = nullptr;
	::java::nio::IntBuffer* shapeTypesArray = nullptr;
	::java::awt::Rectangle* srcCopyAreaRect = nullptr;
	::java::awt::Rectangle* dstCopyAreaRect = nullptr;
	::java::awt::Rectangle* finalCopyAreaRect = nullptr;
	::java::awt::Rectangle* copyAreaBounds = nullptr;
};

	} // java2d
} // sun

#pragma pop_macro("LOWER_BND")
#pragma pop_macro("UPPER_BND")

#endif // _sun_java2d_OSXSurfaceData_h_