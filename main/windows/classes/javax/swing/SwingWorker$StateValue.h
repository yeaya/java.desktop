#ifndef _javax_swing_SwingWorker$StateValue_h_
#define _javax_swing_SwingWorker$StateValue_h_
//$ class javax.swing.SwingWorker$StateValue
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DONE")
#undef DONE
#pragma push_macro("PENDING")
#undef PENDING
#pragma push_macro("STARTED")
#undef STARTED

namespace javax {
	namespace swing {

class $export SwingWorker$StateValue : public ::java::lang::Enum {
	$class(SwingWorker$StateValue, 0, ::java::lang::Enum)
public:
	SwingWorker$StateValue();
	static $Array<::javax::swing::SwingWorker$StateValue>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::SwingWorker$StateValue* valueOf($String* name);
	static $Array<::javax::swing::SwingWorker$StateValue>* values();
	static ::javax::swing::SwingWorker$StateValue* PENDING;
	static ::javax::swing::SwingWorker$StateValue* STARTED;
	static ::javax::swing::SwingWorker$StateValue* DONE;
	static $Array<::javax::swing::SwingWorker$StateValue>* $VALUES;
};

	} // swing
} // javax

#pragma pop_macro("DONE")
#pragma pop_macro("PENDING")
#pragma pop_macro("STARTED")

#endif // _javax_swing_SwingWorker$StateValue_h_