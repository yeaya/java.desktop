#include <javax/accessibility/AccessibleStreamable.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleStreamable_MethodInfo_[] = {
	{"getMimeTypes", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStream", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleStreamable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleStreamable",
	nullptr,
	nullptr,
	nullptr,
	_AccessibleStreamable_MethodInfo_
};

$Object* allocate$AccessibleStreamable($Class* clazz) {
	return $of($alloc(AccessibleStreamable));
}

$Class* AccessibleStreamable::load$($String* name, bool initialize) {
	$loadClass(AccessibleStreamable, name, initialize, &_AccessibleStreamable_ClassInfo_, allocate$AccessibleStreamable);
	return class$;
}

$Class* AccessibleStreamable::class$ = nullptr;

	} // accessibility
} // javax