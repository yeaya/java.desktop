#ifndef _ScrollableTabbedPaneTest$3_h_
#define _ScrollableTabbedPaneTest$3_h_
//$ class ScrollableTabbedPaneTest$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class ScrollableTabbedPaneTest$3 : public ::java::lang::Runnable {
	$class(ScrollableTabbedPaneTest$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ScrollableTabbedPaneTest$3();
	void init$($String* val$shortLAF);
	virtual void run() override;
	$String* val$shortLAF = nullptr;
};

#endif // _ScrollableTabbedPaneTest$3_h_