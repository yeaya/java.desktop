#ifndef _sun_java2d_SunGraphics2D_h_
#define _sun_java2d_SunGraphics2D_h_
//$ class sun.java2d.SunGraphics2D
//$ extends java.awt.Graphics2D
//$ implements sun.awt.ConstrainableGraphics,java.lang.Cloneable,sun.java2d.DestSurfaceProvider

#include <java/awt/Graphics2D.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Array.h>
#include <sun/awt/ConstrainableGraphics.h>
#include <sun/java2d/DestSurfaceProvider.h>

#pragma push_macro("CLIP_DEVICE")
#undef CLIP_DEVICE
#pragma push_macro("CLIP_RECTANGULAR")
#undef CLIP_RECTANGULAR
#pragma push_macro("CLIP_SHAPE")
#undef CLIP_SHAPE
#pragma push_macro("COMP_ALPHA")
#undef COMP_ALPHA
#pragma push_macro("COMP_CUSTOM")
#undef COMP_CUSTOM
#pragma push_macro("COMP_ISCOPY")
#undef COMP_ISCOPY
#pragma push_macro("COMP_XOR")
#undef COMP_XOR
#pragma push_macro("IDENT_ATX")
#undef IDENT_ATX
#pragma push_macro("IDENT_MATRIX")
#undef IDENT_MATRIX
#pragma push_macro("MINALLOCATED")
#undef MINALLOCATED
#pragma push_macro("NON_RECTILINEAR_TRANSFORM_MASK")
#undef NON_RECTILINEAR_TRANSFORM_MASK
#pragma push_macro("NON_UNIFORM_SCALE_MASK")
#undef NON_UNIFORM_SCALE_MASK
#pragma push_macro("PAINT_ALPHACOLOR")
#undef PAINT_ALPHACOLOR
#pragma push_macro("PAINT_CUSTOM")
#undef PAINT_CUSTOM
#pragma push_macro("PAINT_GRADIENT")
#undef PAINT_GRADIENT
#pragma push_macro("PAINT_LIN_GRADIENT")
#undef PAINT_LIN_GRADIENT
#pragma push_macro("PAINT_OPAQUECOLOR")
#undef PAINT_OPAQUECOLOR
#pragma push_macro("PAINT_RAD_GRADIENT")
#undef PAINT_RAD_GRADIENT
#pragma push_macro("PAINT_TEXTURE")
#undef PAINT_TEXTURE
#pragma push_macro("STROKE_CUSTOM")
#undef STROKE_CUSTOM
#pragma push_macro("STROKE_THIN")
#undef STROKE_THIN
#pragma push_macro("STROKE_THINDASHED")
#undef STROKE_THINDASHED
#pragma push_macro("STROKE_WIDE")
#undef STROKE_WIDE
#pragma push_macro("TEXTARRSIZE")
#undef TEXTARRSIZE
#pragma push_macro("TRANSFORM_ANY_TRANSLATE")
#undef TRANSFORM_ANY_TRANSLATE
#pragma push_macro("TRANSFORM_GENERIC")
#undef TRANSFORM_GENERIC
#pragma push_macro("TRANSFORM_INT_TRANSLATE")
#undef TRANSFORM_INT_TRANSLATE
#pragma push_macro("TRANSFORM_ISIDENT")
#undef TRANSFORM_ISIDENT
#pragma push_macro("TRANSFORM_TRANSLATESCALE")
#undef TRANSFORM_TRANSLATESCALE
#pragma push_macro("TYPE_FLIP")
#undef TYPE_FLIP
#pragma push_macro("TYPE_GENERAL_ROTATION")
#undef TYPE_GENERAL_ROTATION
#pragma push_macro("TYPE_GENERAL_SCALE")
#undef TYPE_GENERAL_SCALE
#pragma push_macro("TYPE_GENERAL_TRANSFORM")
#undef TYPE_GENERAL_TRANSFORM
#pragma push_macro("TYPE_MASK_ROTATION")
#undef TYPE_MASK_ROTATION

namespace java {
	namespace awt {
		class BasicStroke;
		class Color;
		class Composite;
		class Font;
		class FontMetrics;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
		class Paint;
		class Rectangle;
		class RenderingHints;
		class RenderingHints$Key;
		class Shape;
		class Stroke;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
			class GlyphVector;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class BufferedImageOp;
			class ColorModel;
			class ImageObserver;
			class MultiResolutionImage;
			class RenderedImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			namespace renderable {
				class RenderableImage;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace java2d {
		class Surface;
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class Blit;
			class CompositeType;
			class FontInfo;
			class MaskFill;
			class RenderLoops;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class DrawImagePipe;
			class PixelDrawPipe;
			class PixelFillPipe;
			class Region;
			class ShapeDrawPipe;
			class TextPipe;
			class ValidatePipe;
		}
	}
}

namespace sun {
	namespace java2d {

class SunGraphics2D : public ::java::awt::Graphics2D, public ::sun::awt::ConstrainableGraphics, public ::java::lang::Cloneable, public ::sun::java2d::DestSurfaceProvider {
	$class(SunGraphics2D, $HAS_FINALIZE, ::java::awt::Graphics2D, ::sun::awt::ConstrainableGraphics, ::java::lang::Cloneable, ::sun::java2d::DestSurfaceProvider)
public:
	SunGraphics2D();
	using ::java::awt::Graphics2D::create;
	using ::java::awt::Graphics2D::drawPolygon;
	using ::java::awt::Graphics2D::fillPolygon;
	virtual bool equals(Object$* arg0) override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::SurfaceData* sd, ::java::awt::Color* fg, ::java::awt::Color* bg, ::java::awt::Font* f);
	virtual void addRenderingHints(::java::util::Map* hints) override;
	::sun::java2d::loops::FontInfo* checkFontInfo(::sun::java2d::loops::FontInfo* info, ::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	virtual void clearRect(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void clip(::java::awt::Shape* s) override;
	virtual void clipRect(int32_t x, int32_t y, int32_t w, int32_t h) override;
	bool clipTo(::java::awt::Rectangle* destRect, ::java::awt::Rectangle* clip);
	virtual $Object* clone() override;
	static ::java::awt::Shape* cloneShape(::java::awt::Shape* s);
	::java::awt::geom::AffineTransform* cloneTransform();
	void constrain(int32_t x, int32_t y, int32_t w, int32_t h, ::sun::java2d::pipe::Region* region);
	virtual void constrain(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void copyArea(int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy) override;
	bool copyImage(::java::awt::Image* img, int32_t dx, int32_t dy, int32_t sx, int32_t sy, int32_t width, int32_t height, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer);
	virtual ::java::awt::Graphics* create() override;
	virtual void dispose() override;
	void doCopyArea(int32_t x, int32_t y, int32_t w, int32_t h, int32_t dx, int32_t dy);
	virtual void draw(::java::awt::Shape* s) override;
	virtual void drawArc(int32_t x, int32_t y, int32_t w, int32_t h, int32_t startAngl, int32_t arcAngl) override;
	virtual void drawBytes($bytes* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
	virtual void drawChars($chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
	virtual void drawGlyphVector(::java::awt::font::GlyphVector* gv, float x, float y) override;
	::java::lang::Boolean* drawHiDPIImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer, ::java::awt::geom::AffineTransform* xform);
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bg, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bg, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
	virtual bool drawImage(::java::awt::Image* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::image::ImageObserver* observer) override;
	virtual void drawImage(::java::awt::image::BufferedImage* bImg, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) override;
	virtual void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawRect(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void drawRenderableImage(::java::awt::image::renderable::RenderableImage* img, ::java::awt::geom::AffineTransform* xform) override;
	virtual void drawRenderedImage(::java::awt::image::RenderedImage* img, ::java::awt::geom::AffineTransform* xform) override;
	virtual void drawRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) override;
	virtual void drawString($String* str, int32_t x, int32_t y) override;
	virtual void drawString($String* str, float x, float y) override;
	virtual void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) override;
	virtual void drawString(::java::text::AttributedCharacterIterator* iterator, float x, float y) override;
	void drawTranslatedRenderedImage(::java::awt::image::RenderedImage* img, ::java::awt::Rectangle* region, int32_t i2uTransX, int32_t i2uTransY);
	virtual void fill(::java::awt::Shape* s) override;
	virtual void fillArc(int32_t x, int32_t y, int32_t w, int32_t h, int32_t startAngl, int32_t arcAngl) override;
	virtual void fillOval(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void fillRect(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void fillRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcW, int32_t arcH) override;
	virtual void finalize() override;
	static void fixRectangleOrientation($doubles* m, ::java::awt::geom::Rectangle2D* clip);
	virtual ::java::awt::Color* getBackground() override;
	virtual ::java::awt::Shape* getClip() override;
	virtual ::java::awt::Rectangle* getClipBounds() override;
	virtual ::java::awt::Rectangle* getClipBounds(::java::awt::Rectangle* r) override;
	virtual ::java::awt::Color* getColor() override;
	::sun::java2d::pipe::Region* getCompClip();
	virtual ::java::awt::Composite* getComposite() override;
	::java::awt::geom::AffineTransform* getDefaultTransform();
	virtual ::sun::java2d::Surface* getDestSurface() override;
	$Object* getDestination();
	::java::awt::image::ColorModel* getDeviceColorModel();
	virtual ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
	virtual ::java::awt::Font* getFont() override;
	::sun::java2d::loops::FontInfo* getFontInfo();
	virtual ::java::awt::FontMetrics* getFontMetrics() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::font::FontRenderContext* getFontRenderContext() override;
	::sun::java2d::loops::FontInfo* getGVFontInfo(::java::awt::Font* font, ::java::awt::font::FontRenderContext* frc);
	static ::java::awt::Rectangle* getImageRegion(::java::awt::image::RenderedImage* img, ::sun::java2d::pipe::Region* compClip, ::java::awt::geom::AffineTransform* transform, ::java::awt::geom::AffineTransform* xform, int32_t padX, int32_t padY);
	virtual ::java::awt::Paint* getPaint() override;
	virtual $Object* getRenderingHint(::java::awt::RenderingHints$Key* hintKey) override;
	virtual ::java::awt::RenderingHints* getRenderingHints() override;
	::java::awt::Image* getResolutionVariant(::java::awt::image::MultiResolutionImage* img, int32_t srcWidth, int32_t srcHeight, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::geom::AffineTransform* xform);
	virtual ::java::awt::Stroke* getStroke() override;
	::sun::java2d::SurfaceData* getSurfaceData();
	static int32_t getTileIndex(int32_t p, int32_t tileGridOffset, int32_t tileSize);
	virtual ::java::awt::geom::AffineTransform* getTransform() override;
	virtual bool hit(::java::awt::Rectangle* rect, ::java::awt::Shape* s, bool onStroke) override;
	virtual bool hitClip(int32_t x, int32_t y, int32_t width, int32_t height) override;
	::java::awt::Shape* intersectByArea(::java::awt::Shape* s1, ::java::awt::Shape* s2, bool keep1, bool keep2);
	::java::awt::Shape* intersectRectShape(::java::awt::geom::Rectangle2D* r, ::java::awt::Shape* s, bool keep1, bool keep2);
	::java::awt::Shape* intersectShapes(::java::awt::Shape* s1, ::java::awt::Shape* s2, bool keep1, bool keep2);
	void invalidatePipe();
	void invalidateTransform();
	static bool isIntegerTranslation(::java::awt::geom::AffineTransform* xform);
	static bool isRotated($doubles* mtx);
	::java::awt::RenderingHints* makeHints(::java::util::Map* hints);
	void revalidateAll();
	virtual void rotate(double theta) override;
	virtual void rotate(double theta, double x, double y) override;
	virtual void scale(double sx, double sy) override;
	bool scaleImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer);
	virtual void setBackground(::java::awt::Color* color) override;
	virtual void setClip(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void setClip(::java::awt::Shape* sh) override;
	virtual void setColor(::java::awt::Color* color) override;
	virtual void setComposite(::java::awt::Composite* comp) override;
	void setDevClip(int32_t x, int32_t y, int32_t w, int32_t h);
	void setDevClip(::java::awt::Rectangle* r);
	virtual void setFont(::java::awt::Font* font) override;
	virtual void setPaint(::java::awt::Paint* paint) override;
	virtual void setPaintMode() override;
	virtual void setRenderingHint(::java::awt::RenderingHints$Key* hintKey, Object$* hintValue) override;
	virtual void setRenderingHints(::java::util::Map* hints) override;
	virtual void setStroke(::java::awt::Stroke* s) override;
	virtual void setTransform(::java::awt::geom::AffineTransform* Tx) override;
	virtual void setXORMode(::java::awt::Color* c) override;
	virtual void shear(double shx, double shy) override;
	virtual $String* toString() override;
	virtual void transform(::java::awt::geom::AffineTransform* xform) override;
	::java::awt::Rectangle* transformBounds(::java::awt::Rectangle* rect, ::java::awt::geom::AffineTransform* tx);
	bool transformImage(::java::awt::Image* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::image::ImageObserver* observer);
	::java::awt::Shape* transformShape(::java::awt::Shape* s);
	static ::java::awt::Shape* transformShape(int32_t tx, int32_t ty, ::java::awt::Shape* s);
	static ::java::awt::Shape* transformShape(::java::awt::geom::AffineTransform* tx, ::java::awt::Shape* clip);
	virtual void translate(double tx, double ty) override;
	virtual void translate(int32_t x, int32_t y) override;
	::java::awt::Shape* untransformShape(::java::awt::Shape* s);
	void validateBasicStroke(::java::awt::BasicStroke* bs);
	void validateColor();
	void validateCompClip();
	void validatePipe();
	static bool $assertionsDisabled;
	static const int32_t PAINT_CUSTOM = 6;
	static const int32_t PAINT_TEXTURE = 5;
	static const int32_t PAINT_RAD_GRADIENT = 4;
	static const int32_t PAINT_LIN_GRADIENT = 3;
	static const int32_t PAINT_GRADIENT = 2;
	static const int32_t PAINT_ALPHACOLOR = 1;
	static const int32_t PAINT_OPAQUECOLOR = 0;
	static const int32_t COMP_CUSTOM = 3;
	static const int32_t COMP_XOR = 2;
	static const int32_t COMP_ALPHA = 1;
	static const int32_t COMP_ISCOPY = 0;
	static const int32_t STROKE_CUSTOM = 3;
	static const int32_t STROKE_WIDE = 2;
	static const int32_t STROKE_THINDASHED = 1;
	static const int32_t STROKE_THIN = 0;
	static const int32_t TRANSFORM_GENERIC = 4;
	static const int32_t TRANSFORM_TRANSLATESCALE = 3;
	static const int32_t TRANSFORM_ANY_TRANSLATE = 2;
	static const int32_t TRANSFORM_INT_TRANSLATE = 1;
	static const int32_t TRANSFORM_ISIDENT = 0;
	static const int32_t CLIP_SHAPE = 2;
	static const int32_t CLIP_RECTANGULAR = 1;
	static const int32_t CLIP_DEVICE = 0;
	int32_t eargb = 0;
	int32_t pixel = 0;
	::sun::java2d::SurfaceData* surfaceData = nullptr;
	::sun::java2d::pipe::PixelDrawPipe* drawpipe = nullptr;
	::sun::java2d::pipe::PixelFillPipe* fillpipe = nullptr;
	::sun::java2d::pipe::DrawImagePipe* imagepipe = nullptr;
	::sun::java2d::pipe::ShapeDrawPipe* shapepipe = nullptr;
	::sun::java2d::pipe::TextPipe* textpipe = nullptr;
	::sun::java2d::loops::MaskFill* alphafill = nullptr;
	::sun::java2d::loops::RenderLoops* loops = nullptr;
	::sun::java2d::loops::CompositeType* imageComp = nullptr;
	int32_t paintState = 0;
	int32_t compositeState = 0;
	int32_t strokeState = 0;
	int32_t transformState = 0;
	int32_t clipState = 0;
	::java::awt::Color* foregroundColor = nullptr;
	::java::awt::Color* backgroundColor = nullptr;
	::java::awt::geom::AffineTransform* transform$ = nullptr;
	int32_t transX = 0;
	int32_t transY = 0;
	static ::java::awt::Stroke* defaultStroke;
	static ::java::awt::Composite* defaultComposite;
	static ::java::awt::Font* defaultFont;
	::java::awt::Paint* paint = nullptr;
	::java::awt::Stroke* stroke = nullptr;
	::java::awt::Composite* composite = nullptr;
	::java::awt::Font* font = nullptr;
	::java::awt::FontMetrics* fontMetrics = nullptr;
	int32_t renderHint = 0;
	int32_t antialiasHint = 0;
	int32_t textAntialiasHint = 0;
	int32_t fractionalMetricsHint = 0;
	int32_t lcdTextContrast = 0;
	static int32_t lcdTextContrastDefaultValue;
	int32_t interpolationHint = 0;
	int32_t strokeHint = 0;
	int32_t interpolationType = 0;
	::java::awt::RenderingHints* hints = nullptr;
	::sun::java2d::pipe::Region* constrainClip = nullptr;
	int32_t constrainX = 0;
	int32_t constrainY = 0;
	::sun::java2d::pipe::Region* clipRegion = nullptr;
	::java::awt::Shape* usrClip = nullptr;
	::sun::java2d::pipe::Region* devClip = nullptr;
	int32_t resolutionVariantHint = 0;
	bool validFontInfo = false;
	::sun::java2d::loops::FontInfo* fontInfo = nullptr;
	::sun::java2d::loops::FontInfo* glyphVectorFontInfo = nullptr;
	::java::awt::font::FontRenderContext* glyphVectorFRC = nullptr;
	static const int32_t slowTextTransformMask = 120; // ::java::awt::geom::AffineTransform::TYPE_GENERAL_TRANSFORM | ::java::awt::geom::AffineTransform::TYPE_MASK_ROTATION | ::java::awt::geom::AffineTransform::TYPE_FLIP
	static ::sun::java2d::pipe::ValidatePipe* invalidpipe;
	static $doubles* IDENT_MATRIX;
	static ::java::awt::geom::AffineTransform* IDENT_ATX;
	static const int32_t MINALLOCATED = 8;
	static const int32_t TEXTARRSIZE = 17;
	static $Array<double, 2>* textTxArr;
	static $Array<::java::awt::geom::AffineTransform>* textAtArr;
	static const int32_t NON_UNIFORM_SCALE_MASK = (::java::awt::geom::AffineTransform::TYPE_GENERAL_TRANSFORM | ::java::awt::geom::AffineTransform::TYPE_GENERAL_SCALE);
	static double MinPenSizeAA;
	static double MinPenSizeAASquared;
	static double MinPenSizeSquared;
	static const int32_t NON_RECTILINEAR_TRANSFORM_MASK = (::java::awt::geom::AffineTransform::TYPE_GENERAL_TRANSFORM | ::java::awt::geom::AffineTransform::TYPE_GENERAL_ROTATION);
	::sun::java2d::loops::Blit* lastCAblit = nullptr;
	::java::awt::Composite* lastCAcomp = nullptr;
	::java::awt::font::FontRenderContext* cachedFRC = nullptr;
};

	} // java2d
} // sun

#pragma pop_macro("CLIP_DEVICE")
#pragma pop_macro("CLIP_RECTANGULAR")
#pragma pop_macro("CLIP_SHAPE")
#pragma pop_macro("COMP_ALPHA")
#pragma pop_macro("COMP_CUSTOM")
#pragma pop_macro("COMP_ISCOPY")
#pragma pop_macro("COMP_XOR")
#pragma pop_macro("IDENT_ATX")
#pragma pop_macro("IDENT_MATRIX")
#pragma pop_macro("MINALLOCATED")
#pragma pop_macro("NON_RECTILINEAR_TRANSFORM_MASK")
#pragma pop_macro("NON_UNIFORM_SCALE_MASK")
#pragma pop_macro("PAINT_ALPHACOLOR")
#pragma pop_macro("PAINT_CUSTOM")
#pragma pop_macro("PAINT_GRADIENT")
#pragma pop_macro("PAINT_LIN_GRADIENT")
#pragma pop_macro("PAINT_OPAQUECOLOR")
#pragma pop_macro("PAINT_RAD_GRADIENT")
#pragma pop_macro("PAINT_TEXTURE")
#pragma pop_macro("STROKE_CUSTOM")
#pragma pop_macro("STROKE_THIN")
#pragma pop_macro("STROKE_THINDASHED")
#pragma pop_macro("STROKE_WIDE")
#pragma pop_macro("TEXTARRSIZE")
#pragma pop_macro("TRANSFORM_ANY_TRANSLATE")
#pragma pop_macro("TRANSFORM_GENERIC")
#pragma pop_macro("TRANSFORM_INT_TRANSLATE")
#pragma pop_macro("TRANSFORM_ISIDENT")
#pragma pop_macro("TRANSFORM_TRANSLATESCALE")
#pragma pop_macro("TYPE_FLIP")
#pragma pop_macro("TYPE_GENERAL_ROTATION")
#pragma pop_macro("TYPE_GENERAL_SCALE")
#pragma pop_macro("TYPE_GENERAL_TRANSFORM")
#pragma pop_macro("TYPE_MASK_ROTATION")

#endif // _sun_java2d_SunGraphics2D_h_