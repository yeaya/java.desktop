#ifndef _java_awt_image_renderable_RenderContext_h_
#define _java_awt_image_renderable_RenderContext_h_
//$ class java.awt.image.renderable.RenderContext
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		class RenderingHints;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

class $import RenderContext : public ::java::lang::Cloneable {
	$class(RenderContext, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	RenderContext();
	void init$(::java::awt::geom::AffineTransform* usr2dev, ::java::awt::Shape* aoi, ::java::awt::RenderingHints* hints);
	void init$(::java::awt::geom::AffineTransform* usr2dev);
	void init$(::java::awt::geom::AffineTransform* usr2dev, ::java::awt::RenderingHints* hints);
	void init$(::java::awt::geom::AffineTransform* usr2dev, ::java::awt::Shape* aoi);
	virtual $Object* clone() override;
	virtual void concatenateTransform(::java::awt::geom::AffineTransform* modTransform);
	virtual void concetenateTransform(::java::awt::geom::AffineTransform* modTransform);
	virtual ::java::awt::Shape* getAreaOfInterest();
	virtual ::java::awt::RenderingHints* getRenderingHints();
	virtual ::java::awt::geom::AffineTransform* getTransform();
	virtual void preConcatenateTransform(::java::awt::geom::AffineTransform* modTransform);
	virtual void preConcetenateTransform(::java::awt::geom::AffineTransform* modTransform);
	virtual void setAreaOfInterest(::java::awt::Shape* newAoi);
	virtual void setRenderingHints(::java::awt::RenderingHints* hints);
	virtual void setTransform(::java::awt::geom::AffineTransform* newTransform);
	::java::awt::RenderingHints* hints = nullptr;
	::java::awt::geom::AffineTransform* usr2dev = nullptr;
	::java::awt::Shape* aoi = nullptr;
};

			} // renderable
		} // image
	} // awt
} // java

#endif // _java_awt_image_renderable_RenderContext_h_