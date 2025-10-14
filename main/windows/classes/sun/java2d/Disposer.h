#ifndef _sun_java2d_Disposer_h_
#define _sun_java2d_Disposer_h_
//$ class sun.java2d.Disposer
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

#pragma push_macro("PHANTOM")
#undef PHANTOM
#pragma push_macro("WEAK")
#undef WEAK

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Reference;
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Hashtable;
	}
}
namespace sun {
	namespace java2d {
		class DisposerRecord;
	}
}

namespace sun {
	namespace java2d {

class Disposer : public ::java::lang::Runnable {
	$class(Disposer, 0, ::java::lang::Runnable)
public:
	Disposer();
	void init$();
	virtual void add(Object$* target, ::sun::java2d::DisposerRecord* rec);
	static void addObjectRecord(Object$* obj, ::sun::java2d::DisposerRecord* rec);
	static void addRecord(Object$* target, int64_t disposeMethod, int64_t pData);
	static void addRecord(Object$* target, ::sun::java2d::DisposerRecord* rec);
	static void addReference(::java::lang::ref::Reference* ref, ::sun::java2d::DisposerRecord* rec);
	static void clearDeferredRecords();
	static ::java::lang::ref::ReferenceQueue* getQueue();
	static void initIDs();
	static ::java::lang::Void* lambda$static$0();
	static void pollRemove();
	virtual void run() override;
	static ::java::lang::ref::ReferenceQueue* queue;
	static ::java::util::Hashtable* records;
	static ::sun::java2d::Disposer* disposerInstance;
	static const int32_t WEAK = 0;
	static const int32_t PHANTOM = 1;
	static int32_t refType;
	static ::java::util::ArrayList* deferredRecords;
	static $volatile(bool) pollingQueue;
};

	} // java2d
} // sun

#pragma pop_macro("PHANTOM")
#pragma pop_macro("WEAK")

#endif // _sun_java2d_Disposer_h_