#ifndef _javax_swing_text_AsyncBoxView$ChildState_h_
#define _javax_swing_text_AsyncBoxView$ChildState_h_
//$ class javax.swing.text.AsyncBoxView$ChildState
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace text {
			class AsyncBoxView;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import AsyncBoxView$ChildState : public ::java::lang::Runnable {
	$class(AsyncBoxView$ChildState, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AsyncBoxView$ChildState();
	void init$(::javax::swing::text::AsyncBoxView* this$0, ::javax::swing::text::View* v);
	virtual ::javax::swing::text::View* getChildView();
	virtual float getMajorOffset();
	virtual float getMajorSpan();
	virtual float getMinorOffset();
	virtual float getMinorSpan();
	virtual bool isLayoutValid();
	virtual void preferenceChanged(bool width, bool height);
	virtual void run() override;
	virtual void setMajorOffset(float offs);
	virtual void updateChild();
	::javax::swing::text::AsyncBoxView* this$0 = nullptr;
	float min = 0.0;
	float pref = 0.0;
	float max = 0.0;
	bool minorValid = false;
	float span = 0.0;
	float offset = 0.0;
	bool majorValid = false;
	::javax::swing::text::View* child = nullptr;
	bool childSizeValid = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AsyncBoxView$ChildState_h_