#ifndef _javax_swing_DebugGraphicsInfo_h_
#define _javax_swing_DebugGraphicsInfo_h_
//$ class javax.swing.DebugGraphicsInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JFrame;
	}
}

namespace javax {
	namespace swing {

class DebugGraphicsInfo : public ::java::lang::Object {
	$class(DebugGraphicsInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DebugGraphicsInfo();
	void init$();
	virtual int32_t getDebugOptions(::javax::swing::JComponent* component);
	virtual void log($String* string);
	virtual void setDebugOptions(::javax::swing::JComponent* component, int32_t debug);
	::java::awt::Color* flashColor = nullptr;
	int32_t flashTime = 0;
	int32_t flashCount = 0;
	::java::util::Hashtable* componentToDebug = nullptr;
	::javax::swing::JFrame* debugFrame = nullptr;
	::java::io::PrintStream* stream = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_DebugGraphicsInfo_h_