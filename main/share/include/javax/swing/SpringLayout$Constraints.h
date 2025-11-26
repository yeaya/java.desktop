#ifndef _javax_swing_SpringLayout$Constraints_h_
#define _javax_swing_SpringLayout$Constraints_h_
//$ class javax.swing.SpringLayout$Constraints
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class Spring;
	}
}

namespace javax {
	namespace swing {

class $import SpringLayout$Constraints : public ::java::lang::Object {
	$class(SpringLayout$Constraints, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SpringLayout$Constraints();
	void init$();
	void init$(::javax::swing::Spring* x, ::javax::swing::Spring* y);
	void init$(::javax::swing::Spring* x, ::javax::swing::Spring* y, ::javax::swing::Spring* width, ::javax::swing::Spring* height);
	void init$(::java::awt::Component* c);
	bool defined(::java::util::List* history, $String* s1, $String* s2);
	::javax::swing::Spring* difference(::javax::swing::Spring* s1, ::javax::swing::Spring* s2);
	::javax::swing::Spring* getBaseline();
	int32_t getBaselineFromHeight(int32_t height);
	virtual ::javax::swing::Spring* getConstraint($String* edgeName);
	::javax::swing::Spring* getEast();
	virtual ::javax::swing::Spring* getHeight();
	int32_t getHeightFromBaseLine(int32_t baseline);
	::javax::swing::Spring* getHorizontalCenter();
	::javax::swing::Spring* getSouth();
	::javax::swing::Spring* getVerticalCenter();
	virtual ::javax::swing::Spring* getWidth();
	virtual ::javax::swing::Spring* getX();
	virtual ::javax::swing::Spring* getY();
	::javax::swing::Spring* heightToRelativeBaseline(::javax::swing::Spring* s);
	void pushConstraint($String* name, ::javax::swing::Spring* value, bool horizontal);
	::javax::swing::Spring* relativeBaselineToHeight(::javax::swing::Spring* s);
	virtual void reset();
	::javax::swing::Spring* scale(::javax::swing::Spring* s, float factor);
	void setBaseline(::javax::swing::Spring* baseline);
	virtual void setConstraint($String* edgeName, ::javax::swing::Spring* s);
	void setEast(::javax::swing::Spring* east);
	virtual void setHeight(::javax::swing::Spring* height);
	void setHorizontalCenter(::javax::swing::Spring* horizontalCenter);
	void setSouth(::javax::swing::Spring* south);
	void setVerticalCenter(::javax::swing::Spring* verticalCenter);
	virtual void setWidth(::javax::swing::Spring* width);
	virtual void setX(::javax::swing::Spring* x);
	virtual void setY(::javax::swing::Spring* y);
	::javax::swing::Spring* sum(::javax::swing::Spring* s1, ::javax::swing::Spring* s2);
	::javax::swing::Spring* x = nullptr;
	::javax::swing::Spring* y = nullptr;
	::javax::swing::Spring* width = nullptr;
	::javax::swing::Spring* height = nullptr;
	::javax::swing::Spring* east = nullptr;
	::javax::swing::Spring* south = nullptr;
	::javax::swing::Spring* horizontalCenter = nullptr;
	::javax::swing::Spring* verticalCenter = nullptr;
	::javax::swing::Spring* baseline = nullptr;
	::java::util::List* horizontalHistory = nullptr;
	::java::util::List* verticalHistory = nullptr;
	::java::awt::Component* c = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SpringLayout$Constraints_h_