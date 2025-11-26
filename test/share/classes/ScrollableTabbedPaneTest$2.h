#ifndef _ScrollableTabbedPaneTest$2_h_
#define _ScrollableTabbedPaneTest$2_h_
//$ class ScrollableTabbedPaneTest$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class ScrollableTabbedPaneTest$2 : public ::java::lang::Runnable {
	$class(ScrollableTabbedPaneTest$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ScrollableTabbedPaneTest$2();
	void init$($String* val$shortLAF);
	virtual void run() override;
	$String* val$shortLAF = nullptr;
};

#endif // _ScrollableTabbedPaneTest$2_h_