#ifndef _NestedWorkers_h_
#define _NestedWorkers_h_
//$ class NestedWorkers
//$ extends javax.swing.SwingWorker

#include <java/lang/Array.h>
#include <javax/swing/SwingWorker.h>

#pragma push_macro("MAX_LEVEL")
#undef MAX_LEVEL

class $export NestedWorkers : public ::javax::swing::SwingWorker {
	$class(NestedWorkers, $NO_CLASS_INIT, ::javax::swing::SwingWorker)
public:
	NestedWorkers();
	void init$(int32_t level);
	virtual $Object* doInBackground() override;
	static void main($StringArray* args);
	static const int32_t MAX_LEVEL = 2;
	int32_t level = 0;
};

#pragma pop_macro("MAX_LEVEL")

#endif // _NestedWorkers_h_