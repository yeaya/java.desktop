#ifndef _com_sun_beans_util_Cache$Kind$Weak_h_
#define _com_sun_beans_util_Cache$Kind$Weak_h_
//$ class com.sun.beans.util.Cache$Kind$Weak
//$ extends java.lang.ref.WeakReference
//$ implements com.sun.beans.util.Cache$Ref

#include <com/sun/beans/util/Cache$Ref.h>
#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

class Cache$Kind$Weak : public ::java::lang::ref::WeakReference, public ::com::sun::beans::util::Cache$Ref {
	$class(Cache$Kind$Weak, $NO_CLASS_INIT, ::java::lang::ref::WeakReference, ::com::sun::beans::util::Cache$Ref)
public:
	Cache$Kind$Weak();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* owner, Object$* referent, ::java::lang::ref::ReferenceQueue* queue);
	virtual $Object* getOwner() override;
	virtual $Object* getReferent() override;
	virtual bool isStale() override;
	virtual void removeOwner() override;
	virtual $String* toString() override;
	$Object* owner = nullptr;
};

			} // util
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_util_Cache$Kind$Weak_h_