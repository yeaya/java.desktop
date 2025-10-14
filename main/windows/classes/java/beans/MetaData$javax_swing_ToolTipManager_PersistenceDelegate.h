#ifndef _java_beans_MetaData$javax_swing_ToolTipManager_PersistenceDelegate_h_
#define _java_beans_MetaData$javax_swing_ToolTipManager_PersistenceDelegate_h_
//$ class java.beans.MetaData$javax_swing_ToolTipManager_PersistenceDelegate
//$ extends java.beans.PersistenceDelegate

#include <java/beans/PersistenceDelegate.h>

namespace java {
	namespace beans {
		class Encoder;
		class Expression;
	}
}

namespace java {
	namespace beans {

class MetaData$javax_swing_ToolTipManager_PersistenceDelegate : public ::java::beans::PersistenceDelegate {
	$class(MetaData$javax_swing_ToolTipManager_PersistenceDelegate, $NO_CLASS_INIT, ::java::beans::PersistenceDelegate)
public:
	MetaData$javax_swing_ToolTipManager_PersistenceDelegate();
	void init$();
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$javax_swing_ToolTipManager_PersistenceDelegate_h_