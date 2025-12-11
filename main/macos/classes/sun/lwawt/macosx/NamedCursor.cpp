#include <sun/lwawt/macosx/NamedCursor.h>

#include <java/awt/Cursor.h>
#include <jcpp.h>

using $Cursor = ::java::awt::Cursor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _NamedCursor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(NamedCursor::*)($String*)>(&NamedCursor::init$))},
	{}
};

$ClassInfo _NamedCursor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.NamedCursor",
	"java.awt.Cursor",
	nullptr,
	nullptr,
	_NamedCursor_MethodInfo_
};

$Object* allocate$NamedCursor($Class* clazz) {
	return $of($alloc(NamedCursor));
}

void NamedCursor::init$($String* name) {
	$Cursor::init$(name);
}

NamedCursor::NamedCursor() {
}

$Class* NamedCursor::load$($String* name, bool initialize) {
	$loadClass(NamedCursor, name, initialize, &_NamedCursor_ClassInfo_, allocate$NamedCursor);
	return class$;
}

$Class* NamedCursor::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun