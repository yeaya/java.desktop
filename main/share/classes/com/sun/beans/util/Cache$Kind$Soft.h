#ifndef _com_sun_beans_util_Cache$Kind$Soft_h_
#define _com_sun_beans_util_Cache$Kind$Soft_h_
//$ class com.sun.beans.util.Cache$Kind$Soft
//$ extends java.lang.ref.SoftReference
//$ implements com.sun.beans.util.Cache$Ref

#include <com/sun/beans/util/Cache$Ref.h>
#include <java/lang/ref/SoftReference.h>

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

class Cache$Kind$Soft : public ::java::lang::ref::SoftReference, public ::com::sun::beans::util::Cache$Ref {
	$class(Cache$Kind$Soft, $NO_CLASS_INIT, ::java::lang::ref::SoftReference, ::com::sun::beans::util::Cache$Ref)
public:
	Cache$Kind$Soft();
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

#endif // _com_sun_beans_util_Cache$Kind$Soft_h_