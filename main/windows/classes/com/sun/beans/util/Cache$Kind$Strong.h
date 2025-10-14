#ifndef _com_sun_beans_util_Cache$Kind$Strong_h_
#define _com_sun_beans_util_Cache$Kind$Strong_h_
//$ class com.sun.beans.util.Cache$Kind$Strong
//$ extends com.sun.beans.util.Cache$Ref

#include <com/sun/beans/util/Cache$Ref.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

class Cache$Kind$Strong : public ::com::sun::beans::util::Cache$Ref {
	$class(Cache$Kind$Strong, $NO_CLASS_INIT, ::com::sun::beans::util::Cache$Ref)
public:
	Cache$Kind$Strong();
	void init$(Object$* owner, Object$* referent);
	virtual $Object* getOwner() override;
	virtual $Object* getReferent() override;
	virtual bool isStale() override;
	virtual void removeOwner() override;
	$Object* owner = nullptr;
	$Object* referent = nullptr;
};

			} // util
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_util_Cache$Kind$Strong_h_