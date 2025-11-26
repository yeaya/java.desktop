#ifndef _bug6493680$Test$TestSwingWorker_h_
#define _bug6493680$Test$TestSwingWorker_h_
//$ class bug6493680$Test$TestSwingWorker
//$ extends javax.swing.SwingWorker

#include <javax/swing/SwingWorker.h>

class bug6493680$Test;

class bug6493680$Test$TestSwingWorker : public ::javax::swing::SwingWorker {
	$class(bug6493680$Test$TestSwingWorker, $NO_CLASS_INIT, ::javax::swing::SwingWorker)
public:
	bug6493680$Test$TestSwingWorker();
	void init$(::bug6493680$Test* this$0);
	virtual $Object* doInBackground() override;
	virtual void done() override;
	::bug6493680$Test* this$0 = nullptr;
};

#endif // _bug6493680$Test$TestSwingWorker_h_