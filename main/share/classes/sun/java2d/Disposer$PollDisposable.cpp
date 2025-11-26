#include <sun/java2d/Disposer$PollDisposable.h>

#include <sun/java2d/Disposer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Disposer = ::sun::java2d::Disposer;

namespace sun {
	namespace java2d {

$InnerClassInfo _Disposer$PollDisposable_InnerClassesInfo_[] = {
	{"sun.java2d.Disposer$PollDisposable", "sun.java2d.Disposer", "PollDisposable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Disposer$PollDisposable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.Disposer$PollDisposable",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Disposer$PollDisposable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.Disposer"
};

$Object* allocate$Disposer$PollDisposable($Class* clazz) {
	return $of($alloc(Disposer$PollDisposable));
}

$Class* Disposer$PollDisposable::load$($String* name, bool initialize) {
	$loadClass(Disposer$PollDisposable, name, initialize, &_Disposer$PollDisposable_ClassInfo_, allocate$Disposer$PollDisposable);
	return class$;
}

$Class* Disposer$PollDisposable::class$ = nullptr;

	} // java2d
} // sun