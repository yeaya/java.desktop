#ifndef _com_sun_beans_finder_PersistenceDelegateFinder_h_
#define _com_sun_beans_finder_PersistenceDelegateFinder_h_
//$ class com.sun.beans.finder.PersistenceDelegateFinder
//$ extends com.sun.beans.finder.InstanceFinder

#include <com/sun/beans/finder/InstanceFinder.h>
#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class PersistenceDelegate;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class PersistenceDelegateFinder : public ::com::sun::beans::finder::InstanceFinder {
	$class(PersistenceDelegateFinder, $NO_CLASS_INIT, ::com::sun::beans::finder::InstanceFinder)
public:
	PersistenceDelegateFinder();
	void init$();
	virtual $Object* find($Class* type) override;
	virtual $StringArray* getPackages() override;
	void register$($Class* type, ::java::beans::PersistenceDelegate* delegate);
	virtual void setPackages($StringArray* packages) override;
	::java::util::Map* registry = nullptr;
};

			} // finder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_finder_PersistenceDelegateFinder_h_