#ifndef _ScrollableTabbedPaneTest$4_h_
#define _ScrollableTabbedPaneTest$4_h_
//$ class ScrollableTabbedPaneTest$4
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class ScrollableTabbedPaneTest$4 : public ::java::lang::Runnable {
	$class(ScrollableTabbedPaneTest$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ScrollableTabbedPaneTest$4();
	void init$($String* val$shortLAF);
	virtual void run() override;
	$String* val$shortLAF = nullptr;
};

#endif // _ScrollableTabbedPaneTest$4_h_