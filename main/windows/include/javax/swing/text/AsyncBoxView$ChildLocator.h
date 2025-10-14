#ifndef _javax_swing_text_AsyncBoxView$ChildLocator_h_
#define _javax_swing_text_AsyncBoxView$ChildLocator_h_
//$ class javax.swing.text.AsyncBoxView$ChildLocator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AsyncBoxView;
			class AsyncBoxView$ChildState;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import AsyncBoxView$ChildLocator : public ::java::lang::Object {
	$class(AsyncBoxView$ChildLocator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AsyncBoxView$ChildLocator();
	void init$(::javax::swing::text::AsyncBoxView* this$0);
	virtual void childChanged(::javax::swing::text::AsyncBoxView$ChildState* cs);
	virtual ::java::awt::Shape* getChildAllocation(int32_t index, ::java::awt::Shape* a);
	virtual ::java::awt::Shape* getChildAllocation(int32_t index);
	virtual int32_t getViewIndexAtPoint(float x, float y, ::java::awt::Shape* a);
	virtual int32_t getViewIndexAtVisualOffset(float targetOffset);
	virtual bool intersectsClip(::java::awt::Shape* childAlloc, ::java::awt::Rectangle* clip);
	virtual void paintChildren(::java::awt::Graphics* g);
	virtual void setAllocation(::java::awt::Shape* a);
	virtual int32_t updateChildOffsets(float targetOffset);
	virtual void updateChildOffsetsToIndex(int32_t index);
	::javax::swing::text::AsyncBoxView* this$0 = nullptr;
	::javax::swing::text::AsyncBoxView$ChildState* lastValidOffset = nullptr;
	::java::awt::Rectangle* lastAlloc = nullptr;
	::java::awt::Rectangle* childAlloc = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AsyncBoxView$ChildLocator_h_