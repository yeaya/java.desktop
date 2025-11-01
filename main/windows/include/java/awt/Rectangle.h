#ifndef _java_awt_Rectangle_h_
#define _java_awt_Rectangle_h_
//$ class java.awt.Rectangle
//$ extends java.awt.geom.Rectangle2D
//$ implements java.io.Serializable

#include <java/awt/geom/Rectangle2D.h>
#include <java/io/Serializable.h>

#pragma push_macro("H")
#undef H
#pragma push_macro("W")
#undef W
#pragma push_macro("X")
#undef X
#pragma push_macro("Y")
#undef Y

namespace java {
	namespace awt {
		class Dimension;
		class Point;
	}
}

namespace java {
	namespace awt {

class $import Rectangle : public ::java::awt::geom::Rectangle2D, public ::java::io::Serializable {
	$class(Rectangle, 0, ::java::awt::geom::Rectangle2D, ::java::io::Serializable)
public:
	Rectangle();
	using ::java::awt::geom::Rectangle2D::contains;
	using ::java::awt::geom::Rectangle2D::intersects;
	using ::java::awt::geom::Rectangle2D::add;
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::Rectangle* r);
	void init$(int32_t x, int32_t y, int32_t width, int32_t height);
	void init$(int32_t width, int32_t height);
	void init$(::java::awt::Point* p, ::java::awt::Dimension* d);
	void init$(::java::awt::Point* p);
	void init$(::java::awt::Dimension* d);
	virtual void add(int32_t newx, int32_t newy);
	virtual void add(::java::awt::Point* pt);
	virtual void add(::java::awt::Rectangle* r);
	static int32_t clip(double v, bool doceil);
	virtual bool contains(::java::awt::Point* p);
	virtual bool contains(int32_t x, int32_t y);
	virtual bool contains(::java::awt::Rectangle* r);
	virtual bool contains(int32_t X, int32_t Y, int32_t W, int32_t H);
	virtual ::java::awt::geom::Rectangle2D* createIntersection(::java::awt::geom::Rectangle2D* r) override;
	virtual ::java::awt::geom::Rectangle2D* createUnion(::java::awt::geom::Rectangle2D* r) override;
	virtual bool equals(Object$* obj) override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual double getHeight() override;
	virtual ::java::awt::Point* getLocation();
	virtual ::java::awt::Dimension* getSize();
	virtual double getWidth() override;
	virtual double getX() override;
	virtual double getY() override;
	virtual void grow(int32_t h, int32_t v);
	static void initIDs();
	virtual bool inside(int32_t X, int32_t Y);
	virtual ::java::awt::Rectangle* intersection(::java::awt::Rectangle* r);
	virtual bool intersects(::java::awt::Rectangle* r);
	virtual bool isEmpty() override;
	virtual void move(int32_t x, int32_t y);
	using ::java::awt::geom::Rectangle2D::outcode;
	virtual int32_t outcode(double x, double y) override;
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void resize(int32_t width, int32_t height);
	virtual void setBounds(::java::awt::Rectangle* r);
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height);
	using ::java::awt::geom::Rectangle2D::setFrame;
	virtual void setLocation(::java::awt::Point* p);
	virtual void setLocation(int32_t x, int32_t y);
	using ::java::awt::geom::Rectangle2D::setRect;
	virtual void setRect(double x, double y, double width, double height) override;
	virtual void setSize(::java::awt::Dimension* d);
	virtual void setSize(int32_t width, int32_t height);
	virtual $String* toString() override;
	virtual void translate(int32_t dx, int32_t dy);
	virtual ::java::awt::Rectangle* union$(::java::awt::Rectangle* r);
	int32_t x = 0;
	int32_t y = 0;
	int32_t width = 0;
	int32_t height = 0;
	static const int64_t serialVersionUID = (int64_t)0xC3B06A051ACA6A74;
};

	} // awt
} // java

#pragma pop_macro("H")
#pragma pop_macro("W")
#pragma pop_macro("X")
#pragma pop_macro("Y")

#endif // _java_awt_Rectangle_h_