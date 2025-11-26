#include <sun/awt/X11/XQueryTree.h>

#include <java/lang/IllegalStateException.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/UnsafeXDisposerRecord.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $UnsafeXDisposerRecord = ::sun::awt::X11::UnsafeXDisposerRecord;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XQueryTree_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC, $staticField(XQueryTree, unsafe)},
	{"__executed", "Z", nullptr, $PRIVATE, $field(XQueryTree, __executed)},
	{"_w", "J", nullptr, 0, $field(XQueryTree, _w)},
	{"root_ptr", "J", nullptr, 0, $field(XQueryTree, root_ptr)},
	{"parent_ptr", "J", nullptr, 0, $field(XQueryTree, parent_ptr)},
	{"children_ptr", "J", nullptr, 0, $field(XQueryTree, children_ptr)},
	{"nchildren_ptr", "J", nullptr, 0, $field(XQueryTree, nchildren_ptr)},
	{"disposer", "Lsun/awt/X11/UnsafeXDisposerRecord;", nullptr, 0, $field(XQueryTree, disposer)},
	{}
};

$MethodInfo _XQueryTree_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XQueryTree::*)(int64_t)>(&XQueryTree::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"execute", "()I", nullptr, $PUBLIC},
	{"execute", "(Lsun/awt/X11/XErrorHandler;)I", nullptr, $PUBLIC},
	{"get_children", "()J", nullptr, $PUBLIC},
	{"get_nchildren", "()I", nullptr, $PUBLIC},
	{"get_parent", "()J", nullptr, $PUBLIC},
	{"get_root", "()J", nullptr, $PUBLIC},
	{"get_w", "()J", nullptr, $PUBLIC},
	{"isDisposed", "()Z", nullptr, $PUBLIC},
	{"isExecuted", "()Z", nullptr, $PUBLIC},
	{"set_children", "(J)V", nullptr, $PUBLIC},
	{"set_nchildren", "(I)V", nullptr, $PUBLIC},
	{"set_parent", "(J)V", nullptr, $PUBLIC},
	{"set_root", "(J)V", nullptr, $PUBLIC},
	{"set_w", "(J)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XQueryTree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XQueryTree",
	"java.lang.Object",
	nullptr,
	_XQueryTree_FieldInfo_,
	_XQueryTree_MethodInfo_
};

$Object* allocate$XQueryTree($Class* clazz) {
	return $of($alloc(XQueryTree));
}

$Unsafe* XQueryTree::unsafe = nullptr;

void XQueryTree::init$(int64_t w) {
	$useLocalCurrentObjectStackCache();
	this->__executed = false;
	this->root_ptr = $nc(XQueryTree::unsafe)->allocateMemory($Native::getLongSize());
	this->parent_ptr = $nc(XQueryTree::unsafe)->allocateMemory($Native::getLongSize());
	this->children_ptr = $nc(XQueryTree::unsafe)->allocateMemory($Native::getLongSize());
	this->nchildren_ptr = $nc(XQueryTree::unsafe)->allocateMemory($Native::getIntSize());
	set_w(w);
	$Disposer::addRecord(this, ($set(this, disposer, $new($UnsafeXDisposerRecord, "XQueryTree"_s, $$new($longs, {
		this->root_ptr,
		this->parent_ptr,
		this->nchildren_ptr
	}), $$new($longs, {this->children_ptr})))));
	set_children(0);
}

int32_t XQueryTree::execute() {
	return execute(nullptr);
}

int32_t XQueryTree::execute($XErrorHandler* errorHandler) {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (isDisposed()) {
				$throwNew($IllegalStateException, "Disposed"_s);
			}
			if (this->__executed) {
				$throwNew($IllegalStateException, "Already executed"_s);
			}
			this->__executed = true;
			if (errorHandler != nullptr) {
				$XErrorHandlerUtil::WITH_XERROR_HANDLER(errorHandler);
			}
			$Native::putLong(this->children_ptr, (int64_t)0);
			int64_t var$3 = $XToolkit::getDisplay();
			int32_t status = $XlibWrapper::XQueryTree(var$3, get_w(), this->root_ptr, this->parent_ptr, this->children_ptr, this->nchildren_ptr);
			if (errorHandler != nullptr) {
				$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			}
			var$2 = status;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool XQueryTree::isExecuted() {
	return this->__executed;
}

bool XQueryTree::isDisposed() {
	return $nc(this->disposer)->disposed;
}

void XQueryTree::dispose() {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (isDisposed()) {
				return$1 = true;
				goto $finally;
			}
			$nc(this->disposer)->dispose();
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

int64_t XQueryTree::get_w() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return this->_w;
}

void XQueryTree::set_w(int64_t data) {
	this->_w = data;
}

int64_t XQueryTree::get_root() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return $Native::getLong(this->root_ptr);
}

void XQueryTree::set_root(int64_t data) {
	$Native::putLong(this->root_ptr, data);
}

int64_t XQueryTree::get_parent() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return $Native::getLong(this->parent_ptr);
}

void XQueryTree::set_parent(int64_t data) {
	$Native::putLong(this->parent_ptr, data);
}

int64_t XQueryTree::get_children() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return $Native::getLong(this->children_ptr);
}

void XQueryTree::set_children(int64_t data) {
	$Native::putLong(this->children_ptr, data);
}

int32_t XQueryTree::get_nchildren() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->__executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return $Native::getInt(this->nchildren_ptr);
}

void XQueryTree::set_nchildren(int32_t data) {
	$Native::putInt(this->nchildren_ptr, data);
}

void clinit$XQueryTree($Class* class$) {
	$init($XlibWrapper);
	$assignStatic(XQueryTree::unsafe, $XlibWrapper::unsafe);
}

XQueryTree::XQueryTree() {
}

$Class* XQueryTree::load$($String* name, bool initialize) {
	$loadClass(XQueryTree, name, initialize, &_XQueryTree_ClassInfo_, clinit$XQueryTree, allocate$XQueryTree);
	return class$;
}

$Class* XQueryTree::class$ = nullptr;

		} // X11
	} // awt
} // sun