#ifndef _ScrollableTabbedPaneTest$5_h_
#define _ScrollableTabbedPaneTest$5_h_
//$ class ScrollableTabbedPaneTest$5
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class ScrollableTabbedPaneTest$5 : public ::java::lang::Runnable {
	$class(ScrollableTabbedPaneTest$5, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ScrollableTabbedPaneTest$5();
	void init$($String* val$shortLAF);
	virtual void run() override;
	$String* val$shortLAF = nullptr;
};

#endif // _ScrollableTabbedPaneTest$5_h_