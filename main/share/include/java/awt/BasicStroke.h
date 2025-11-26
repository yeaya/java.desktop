#ifndef _java_awt_BasicStroke_h_
#define _java_awt_BasicStroke_h_
//$ class java.awt.BasicStroke
//$ extends java.awt.Stroke

#include <java/awt/Stroke.h>
#include <java/lang/Array.h>

#pragma push_macro("CAP_BUTT")
#undef CAP_BUTT
#pragma push_macro("CAP_ROUND")
#undef CAP_ROUND
#pragma push_macro("CAP_SQUARE")
#undef CAP_SQUARE
#pragma push_macro("JOIN_BEVEL")
#undef JOIN_BEVEL
#pragma push_macro("JOIN_MITER")
#undef JOIN_MITER
#pragma push_macro("JOIN_ROUND")
#undef JOIN_ROUND

namespace java {
	namespace awt {
		class Shape;
	}
}

namespace java {
	namespace awt {

class $import BasicStroke : public ::java::awt::Stroke {
	$class(BasicStroke, $NO_CLASS_INIT, ::java::awt::Stroke)
public:
	BasicStroke();
	void init$(float width, int32_t cap, int32_t join, float miterlimit, $floats* dash, float dash_phase);
	void init$(float width, int32_t cap, int32_t join, float miterlimit);
	void init$(float width, int32_t cap, int32_t join);
	void init$(float width);
	void init$();
	virtual ::java::awt::Shape* createStrokedShape(::java::awt::Shape* s) override;
	virtual bool equals(Object$* obj) override;
	virtual $floats* getDashArray();
	virtual float getDashPhase();
	virtual int32_t getEndCap();
	virtual int32_t getLineJoin();
	virtual float getLineWidth();
	virtual float getMiterLimit();
	virtual int32_t hashCode() override;
	static const int32_t JOIN_MITER = 0;
	static const int32_t JOIN_ROUND = 1;
	static const int32_t JOIN_BEVEL = 2;
	static const int32_t CAP_BUTT = 0;
	static const int32_t CAP_ROUND = 1;
	static const int32_t CAP_SQUARE = 2;
	float width = 0.0;
	int32_t join = 0;
	int32_t cap = 0;
	float miterlimit = 0.0;
	$floats* dash = nullptr;
	float dash_phase = 0.0;
};

	} // awt
} // java

#pragma pop_macro("CAP_BUTT")
#pragma pop_macro("CAP_ROUND")
#pragma pop_macro("CAP_SQUARE")
#pragma pop_macro("JOIN_BEVEL")
#pragma pop_macro("JOIN_MITER")
#pragma pop_macro("JOIN_ROUND")

#endif // _java_awt_BasicStroke_h_