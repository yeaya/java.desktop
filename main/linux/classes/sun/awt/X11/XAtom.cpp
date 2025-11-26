#include <sun/awt/X11/XAtom.h>

#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/HashMap.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtomList.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

#undef XA_ARC
#undef XA_ATOM
#undef XA_BITMAP
#undef XA_CAP_HEIGHT
#undef XA_CARDINAL
#undef XA_COLORMAP
#undef XA_COPYRIGHT
#undef XA_CURSOR
#undef XA_CUT_BUFFER0
#undef XA_CUT_BUFFER1
#undef XA_CUT_BUFFER2
#undef XA_CUT_BUFFER3
#undef XA_CUT_BUFFER4
#undef XA_CUT_BUFFER5
#undef XA_CUT_BUFFER6
#undef XA_CUT_BUFFER7
#undef XA_DRAWABLE
#undef XA_END_SPACE
#undef XA_FAMILY_NAME
#undef XA_FONT
#undef XA_FONT_NAME
#undef XA_FULL_NAME
#undef XA_INTEGER
#undef XA_ITALIC_ANGLE
#undef XA_LAST_PREDEFINED
#undef XA_MAX_SPACE
#undef XA_MIN_SPACE
#undef XA_NORM_SPACE
#undef XA_NOTICE
#undef XA_PIXMAP
#undef XA_POINT
#undef XA_POINT_SIZE
#undef XA_PRIMARY
#undef XA_QUAD_WIDTH
#undef XA_RECTANGLE
#undef XA_RESOLUTION
#undef XA_RESOURCE_MANAGER
#undef XA_RGB_BEST_MAP
#undef XA_RGB_BLUE_MAP
#undef XA_RGB_COLOR_MAP
#undef XA_RGB_DEFAULT_MAP
#undef XA_RGB_GRAY_MAP
#undef XA_RGB_GREEN_MAP
#undef XA_RGB_RED_MAP
#undef XA_SECONDARY
#undef XA_STRIKEOUT_ASCENT
#undef XA_STRIKEOUT_DESCENT
#undef XA_STRING
#undef XA_SUBSCRIPT_X
#undef XA_SUBSCRIPT_Y
#undef XA_SUPERSCRIPT_X
#undef XA_SUPERSCRIPT_Y
#undef XA_UNDERLINE_POSITION
#undef XA_UNDERLINE_THICKNESS
#undef XA_UTF8_STRING
#undef XA_VISUALID
#undef XA_WEIGHT
#undef XA_WINDOW
#undef XA_WM_CLASS
#undef XA_WM_CLIENT_MACHINE
#undef XA_WM_COMMAND
#undef XA_WM_HINTS
#undef XA_WM_ICON_NAME
#undef XA_WM_ICON_SIZE
#undef XA_WM_NAME
#undef XA_WM_NORMAL_HINTS
#undef XA_WM_SIZE_HINTS
#undef XA_WM_TRANSIENT_FOR
#undef XA_WM_ZOOM_HINTS
#undef XA_X_HEIGHT

using $XAtomArray = $Array<::sun::awt::X11::XAtom>;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtomList = ::sun::awt::X11::XAtomList;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XAtom_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC, $staticField(XAtom, unsafe)},
	{"emptyList", "[Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $STATIC, $staticField(XAtom, emptyList)},
	{"XA_PRIMARY", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_PRIMARY)},
	{"XA_SECONDARY", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_SECONDARY)},
	{"XA_ARC", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_ARC)},
	{"XA_ATOM", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_ATOM)},
	{"XA_BITMAP", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_BITMAP)},
	{"XA_CARDINAL", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_CARDINAL)},
	{"XA_COLORMAP", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_COLORMAP)},
	{"XA_CURSOR", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_CURSOR)},
	{"XA_CUT_BUFFER0", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_CUT_BUFFER0)},
	{"XA_CUT_BUFFER1", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_CUT_BUFFER1)},
	{"XA_CUT_BUFFER2", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_CUT_BUFFER2)},
	{"XA_CUT_BUFFER3", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_CUT_BUFFER3)},
	{"XA_CUT_BUFFER4", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_CUT_BUFFER4)},
	{"XA_CUT_BUFFER5", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_CUT_BUFFER5)},
	{"XA_CUT_BUFFER6", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_CUT_BUFFER6)},
	{"XA_CUT_BUFFER7", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_CUT_BUFFER7)},
	{"XA_DRAWABLE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_DRAWABLE)},
	{"XA_FONT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_FONT)},
	{"XA_INTEGER", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_INTEGER)},
	{"XA_PIXMAP", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_PIXMAP)},
	{"XA_POINT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_POINT)},
	{"XA_RECTANGLE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_RECTANGLE)},
	{"XA_RESOURCE_MANAGER", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_RESOURCE_MANAGER)},
	{"XA_RGB_COLOR_MAP", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_RGB_COLOR_MAP)},
	{"XA_RGB_BEST_MAP", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_RGB_BEST_MAP)},
	{"XA_RGB_BLUE_MAP", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_RGB_BLUE_MAP)},
	{"XA_RGB_DEFAULT_MAP", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_RGB_DEFAULT_MAP)},
	{"XA_RGB_GRAY_MAP", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_RGB_GRAY_MAP)},
	{"XA_RGB_GREEN_MAP", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_RGB_GREEN_MAP)},
	{"XA_RGB_RED_MAP", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_RGB_RED_MAP)},
	{"XA_STRING", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_STRING)},
	{"XA_VISUALID", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_VISUALID)},
	{"XA_WINDOW", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WINDOW)},
	{"XA_WM_COMMAND", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WM_COMMAND)},
	{"XA_WM_HINTS", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WM_HINTS)},
	{"XA_WM_CLIENT_MACHINE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WM_CLIENT_MACHINE)},
	{"XA_WM_ICON_NAME", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WM_ICON_NAME)},
	{"XA_WM_ICON_SIZE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WM_ICON_SIZE)},
	{"XA_WM_NAME", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WM_NAME)},
	{"XA_WM_NORMAL_HINTS", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WM_NORMAL_HINTS)},
	{"XA_WM_SIZE_HINTS", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WM_SIZE_HINTS)},
	{"XA_WM_ZOOM_HINTS", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WM_ZOOM_HINTS)},
	{"XA_MIN_SPACE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_MIN_SPACE)},
	{"XA_NORM_SPACE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_NORM_SPACE)},
	{"XA_MAX_SPACE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_MAX_SPACE)},
	{"XA_END_SPACE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_END_SPACE)},
	{"XA_SUPERSCRIPT_X", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_SUPERSCRIPT_X)},
	{"XA_SUPERSCRIPT_Y", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_SUPERSCRIPT_Y)},
	{"XA_SUBSCRIPT_X", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_SUBSCRIPT_X)},
	{"XA_SUBSCRIPT_Y", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_SUBSCRIPT_Y)},
	{"XA_UNDERLINE_POSITION", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_UNDERLINE_POSITION)},
	{"XA_UNDERLINE_THICKNESS", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_UNDERLINE_THICKNESS)},
	{"XA_STRIKEOUT_ASCENT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_STRIKEOUT_ASCENT)},
	{"XA_STRIKEOUT_DESCENT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_STRIKEOUT_DESCENT)},
	{"XA_ITALIC_ANGLE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_ITALIC_ANGLE)},
	{"XA_X_HEIGHT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_X_HEIGHT)},
	{"XA_QUAD_WIDTH", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_QUAD_WIDTH)},
	{"XA_WEIGHT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WEIGHT)},
	{"XA_POINT_SIZE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_POINT_SIZE)},
	{"XA_RESOLUTION", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_RESOLUTION)},
	{"XA_COPYRIGHT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_COPYRIGHT)},
	{"XA_NOTICE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_NOTICE)},
	{"XA_FONT_NAME", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_FONT_NAME)},
	{"XA_FAMILY_NAME", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_FAMILY_NAME)},
	{"XA_FULL_NAME", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_FULL_NAME)},
	{"XA_CAP_HEIGHT", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_CAP_HEIGHT)},
	{"XA_WM_CLASS", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WM_CLASS)},
	{"XA_WM_TRANSIENT_FOR", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_WM_TRANSIENT_FOR)},
	{"XA_LAST_PREDEFINED", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XAtom, XA_LAST_PREDEFINED)},
	{"atomToAtom", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Long;Lsun/awt/X11/XAtom;>;", $STATIC, $staticField(XAtom, atomToAtom)},
	{"nameToAtom", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Lsun/awt/X11/XAtom;>;", $STATIC, $staticField(XAtom, nameToAtom)},
	{"atom", "J", nullptr, 0, $field(XAtom, atom)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(XAtom, name)},
	{"display", "J", nullptr, 0, $field(XAtom, display)},
	{}
};

$MethodInfo _XAtom_MethodInfo_[] = {
	{"<init>", "(JLjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(XAtom::*)(int64_t,$String*)>(&XAtom::init$))},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)($String*,bool)>(&XAtom::init$))},
	{"<init>", "(JJ)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t,int64_t)>(&XAtom::init$))},
	{"<init>", "(JLjava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(XAtom::*)(int64_t,$String*,bool)>(&XAtom::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)()>(&XAtom::init$))},
	{"DeleteProperty", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t)>(&XAtom::DeleteProperty))},
	{"DeleteProperty", "(Lsun/awt/X11/XBaseWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)($XBaseWindow*)>(&XAtom::DeleteProperty))},
	{"asString", "(J)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int64_t)>(&XAtom::asString))},
	{"checkWindow", "(J)V", nullptr, 0, $method(static_cast<void(XAtom::*)(int64_t)>(&XAtom::checkWindow))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(J)Lsun/awt/X11/XAtom;", nullptr, $STATIC, $method(static_cast<XAtom*(*)(int64_t)>(&XAtom::get))},
	{"get", "(Ljava/lang/String;)Lsun/awt/X11/XAtom;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XAtom*(*)($String*)>(&XAtom::get))},
	{"get32Property", "(JJ)J", nullptr, $PUBLIC, $method(static_cast<int64_t(XAtom::*)(int64_t,int64_t)>(&XAtom::get32Property))},
	{"getAtom", "()J", nullptr, 0, $method(static_cast<int64_t(XAtom::*)()>(&XAtom::getAtom))},
	{"getAtom", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&XAtom::getAtom))},
	{"getAtomData", "(JJI)Z", nullptr, $PUBLIC, $method(static_cast<bool(XAtom::*)(int64_t,int64_t,int32_t)>(&XAtom::getAtomData))},
	{"getAtomData", "(JJJI)Z", nullptr, $PUBLIC, $method(static_cast<bool(XAtom::*)(int64_t,int64_t,int64_t,int32_t)>(&XAtom::getAtomData))},
	{"getAtomListProperty", "(J)[Lsun/awt/X11/XAtom;", nullptr, 0, $method(static_cast<$XAtomArray*(XAtom::*)(int64_t)>(&XAtom::getAtomListProperty))},
	{"getAtomListProperty", "(Lsun/awt/X11/XBaseWindow;)[Lsun/awt/X11/XAtom;", nullptr, 0, $method(static_cast<$XAtomArray*(XAtom::*)($XBaseWindow*)>(&XAtom::getAtomListProperty))},
	{"getAtomListPropertyList", "(J)Lsun/awt/X11/XAtomList;", nullptr, 0, $method(static_cast<$XAtomList*(XAtom::*)(int64_t)>(&XAtom::getAtomListPropertyList))},
	{"getAtomListPropertyList", "(Lsun/awt/X11/XBaseWindow;)Lsun/awt/X11/XAtomList;", nullptr, 0, $method(static_cast<$XAtomList*(XAtom::*)($XBaseWindow*)>(&XAtom::getAtomListPropertyList))},
	{"getAtomSize", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&XAtom::getAtomSize))},
	{"getByteArrayProperty", "(JJ)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(XAtom::*)(int64_t,int64_t)>(&XAtom::getByteArrayProperty))},
	{"getCard32Property", "(Lsun/awt/X11/XBaseWindow;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(XAtom::*)($XBaseWindow*)>(&XAtom::getCard32Property))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(XAtom::*)()>(&XAtom::getName))},
	{"getProperty", "(J)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(XAtom::*)(int64_t)>(&XAtom::getProperty))},
	{"getWindowProperty", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(XAtom::*)(int64_t)>(&XAtom::getWindowProperty))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"intern", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(bool)>(&XAtom::intern))},
	{"isInterned", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(XAtom::*)()>(&XAtom::isInterned))},
	{"lookup", "(J)Lsun/awt/X11/XAtom;", nullptr, $STATIC, $method(static_cast<XAtom*(*)(int64_t)>(&XAtom::lookup))},
	{"lookup", "(Ljava/lang/String;)Lsun/awt/X11/XAtom;", nullptr, $STATIC, $method(static_cast<XAtom*(*)($String*)>(&XAtom::lookup))},
	{"putAtom", "(J)V", nullptr, 0, $method(static_cast<void(XAtom::*)(int64_t)>(&XAtom::putAtom))},
	{"register", "(Lsun/awt/X11/XAtom;)V", nullptr, $STATIC, $method(static_cast<void(*)(XAtom*)>(&XAtom::register$))},
	{"register", "()V", nullptr, 0, $method(static_cast<void(XAtom::*)()>(&XAtom::register$))},
	{"setAtomData", "(JJI)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t,int64_t,int32_t)>(&XAtom::setAtomData))},
	{"setAtomData", "(JJJI)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t,int64_t,int64_t,int32_t)>(&XAtom::setAtomData))},
	{"setAtomData", "(JJ[B)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t,int64_t,$bytes*)>(&XAtom::setAtomData))},
	{"setAtomData8", "(JJJI)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t,int64_t,int64_t,int32_t)>(&XAtom::setAtomData8))},
	{"setAtomListProperty", "(J[Lsun/awt/X11/XAtom;)V", nullptr, 0, $method(static_cast<void(XAtom::*)(int64_t,$XAtomArray*)>(&XAtom::setAtomListProperty))},
	{"setAtomListProperty", "(JLsun/awt/X11/XAtomList;)V", nullptr, 0, $method(static_cast<void(XAtom::*)(int64_t,$XAtomList*)>(&XAtom::setAtomListProperty))},
	{"setAtomListProperty", "(Lsun/awt/X11/XBaseWindow;[Lsun/awt/X11/XAtom;)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)($XBaseWindow*,$XAtomArray*)>(&XAtom::setAtomListProperty))},
	{"setAtomListProperty", "(Lsun/awt/X11/XBaseWindow;Lsun/awt/X11/XAtomList;)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)($XBaseWindow*,$XAtomList*)>(&XAtom::setAtomListProperty))},
	{"setCard32Property", "(JJ)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t,int64_t)>(&XAtom::setCard32Property))},
	{"setCard32Property", "(Lsun/awt/X11/XBaseWindow;J)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)($XBaseWindow*,int64_t)>(&XAtom::setCard32Property))},
	{"setProperty", "(JLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t,$String*)>(&XAtom::setProperty))},
	{"setProperty8", "(JLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t,$String*)>(&XAtom::setProperty8))},
	{"setPropertyUTF8", "(JLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t,$String*)>(&XAtom::setPropertyUTF8))},
	{"setValues", "(JLjava/lang/String;J)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t,$String*,int64_t)>(&XAtom::setValues))},
	{"setWindowProperty", "(JJ)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)(int64_t,int64_t)>(&XAtom::setWindowProperty))},
	{"setWindowProperty", "(Lsun/awt/X11/XBaseWindow;Lsun/awt/X11/XBaseWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(XAtom::*)($XBaseWindow*,$XBaseWindow*)>(&XAtom::setWindowProperty))},
	{"toData", "([Lsun/awt/X11/XAtom;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($XAtomArray*)>(&XAtom::toData))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XAtom_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XAtom",
	"java.lang.Object",
	nullptr,
	_XAtom_FieldInfo_,
	_XAtom_MethodInfo_
};

$Object* allocate$XAtom($Class* clazz) {
	return $of($alloc(XAtom));
}

$Unsafe* XAtom::unsafe = nullptr;
$XAtomArray* XAtom::emptyList = nullptr;
$HashMap* XAtom::atomToAtom = nullptr;
$HashMap* XAtom::nameToAtom = nullptr;

void XAtom::register$(XAtom* at) {
	$init(XAtom);
	if (at == nullptr) {
		return;
	}
	$synchronized(XAtom::class$) {
		if ($nc(at)->atom != 0) {
			$nc(XAtom::atomToAtom)->put($($Long::valueOf(at->atom)), at);
		}
		if ($nc(at)->name != nullptr) {
			$nc(XAtom::nameToAtom)->put(at->name, at);
		}
	}
}

XAtom* XAtom::lookup(int64_t atom) {
	$init(XAtom);
	$synchronized(XAtom::class$) {
		return $cast(XAtom, $nc(XAtom::atomToAtom)->get($($Long::valueOf(atom))));
	}
}

XAtom* XAtom::lookup($String* name) {
	$init(XAtom);
	$synchronized(XAtom::class$) {
		return $cast(XAtom, $nc(XAtom::nameToAtom)->get(name));
	}
}

XAtom* XAtom::get(int64_t atom) {
	$init(XAtom);
	$var(XAtom, xatom, lookup(atom));
	if (xatom == nullptr) {
		$assign(xatom, $new(XAtom, $XToolkit::getDisplay(), atom));
	}
	return xatom;
}

XAtom* XAtom::get($String* name) {
	$init(XAtom);
	$var(XAtom, xatom, lookup(name));
	if (xatom == nullptr) {
		$assign(xatom, $new(XAtom, $XToolkit::getDisplay(), name));
	}
	return xatom;
}

$String* XAtom::getName() {
	if (this->name == nullptr) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$set(this, name, $XlibWrapper::XGetAtomName(this->display, this->atom));
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		register$();
	}
	return this->name;
}

$String* XAtom::asString(int64_t atom) {
	$init(XAtom);
	$var(XAtom, at, lookup(atom));
	if (at == nullptr) {
		return $Long::toString(atom);
	} else {
		return $nc(at)->toString();
	}
}

void XAtom::register$() {
	register$(this);
}

$String* XAtom::toString() {
	if (this->name != nullptr) {
		return $str({this->name, ":"_s, $$str(this->atom)});
	} else {
		return $Long::toString(this->atom);
	}
}

void XAtom::init$(int64_t display, $String* name) {
	XAtom::init$(display, name, true);
}

void XAtom::init$($String* name, bool autoIntern) {
	XAtom::init$($XToolkit::getDisplay(), name, autoIntern);
}

void XAtom::init$(int64_t display, int64_t atom) {
	this->atom = 0;
	this->atom = atom;
	this->display = display;
	register$();
}

void XAtom::init$(int64_t display, $String* name, bool autoIntern) {
	this->atom = 0;
	$set(this, name, name);
	this->display = display;
	if (autoIntern) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				this->atom = $XlibWrapper::InternAtom(display, name, 0);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	register$();
}

void XAtom::init$() {
	this->atom = 0;
}

void XAtom::setProperty(int64_t window, $String* str) {
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::SetProperty(this->display, window, this->atom, str);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XAtom::setPropertyUTF8(int64_t window, $String* str) {
	$useLocalCurrentObjectStackCache();
	$var(XAtom, XA_UTF8_STRING, XAtom::get("UTF8_STRING"_s));
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$var($bytes, bdata, nullptr);
	try {
		$assign(bdata, $nc(str)->getBytes("UTF-8"_s));
	} catch ($UnsupportedEncodingException& uee) {
		uee->printStackTrace();
	}
	if (bdata != nullptr) {
		setAtomData(window, $nc(XA_UTF8_STRING)->atom, bdata);
	}
}

void XAtom::setProperty8(int64_t window, $String* str) {
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$var($bytes, bdata, nullptr);
	try {
		$assign(bdata, $nc(str)->getBytes("ISO-8859-1"_s));
	} catch ($UnsupportedEncodingException& uee) {
		uee->printStackTrace();
	}
	if (bdata != nullptr) {
		setAtomData(window, XAtom::XA_STRING, bdata);
	}
}

$String* XAtom::getProperty(int64_t window) {
	$useLocalCurrentObjectStackCache();
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $XlibWrapper::GetProperty(this->display, window, this->atom));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
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

int64_t XAtom::get32Property(int64_t window, int64_t property_type) {
	$useLocalCurrentObjectStackCache();
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, window, this, (int64_t)0, (int64_t)1, false, property_type));
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t status = getter->execute();
			if (status != $XConstants::Success || getter->getData() == 0) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			bool var$3 = getter->getActualType() != property_type;
			if (var$3 || getter->getActualFormat() != 32) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			var$2 = $Native::getCard32(getter->getData());
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			getter->dispose();
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

int64_t XAtom::getCard32Property($XBaseWindow* window) {
	return get32Property($nc(window)->getWindow(), XAtom::XA_CARDINAL);
}

void XAtom::setCard32Property(int64_t window, int64_t value) {
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($XlibWrapper);
			$Native::putCard32($XlibWrapper::larg1, value);
			$XlibWrapper::XChangeProperty($XToolkit::getDisplay(), window, this->atom, XAtom::XA_CARDINAL, 32, $XConstants::PropModeReplace, $XlibWrapper::larg1, 1);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XAtom::setCard32Property($XBaseWindow* window, int64_t value) {
	setCard32Property($nc(window)->getWindow(), value);
}

bool XAtom::getAtomData(int64_t window, int64_t data_ptr, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, window, this, (int64_t)0, (int64_t)length, false, this));
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			int32_t status = getter->execute();
			if (status != $XConstants::Success || getter->getData() == 0) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			bool var$4 = getter->getActualType() != this->atom;
			bool var$3 = var$4 || getter->getActualFormat() != 32;
			if (var$3 || getter->getNumberOfItems() != length) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			int64_t var$5 = data_ptr;
			int64_t var$6 = getter->getData();
			$XlibWrapper::memcpy(var$5, var$6, length * getAtomSize());
			var$2 = true;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			getter->dispose();
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

bool XAtom::getAtomData(int64_t window, int64_t type, int64_t data_ptr, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, window, this, (int64_t)0, (int64_t)length, false, type));
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			int32_t status = getter->execute();
			if (status != $XConstants::Success || getter->getData() == 0) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			bool var$4 = getter->getActualType() != type;
			bool var$3 = var$4 || getter->getActualFormat() != 32;
			if (var$3 || getter->getNumberOfItems() != length) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			int64_t var$5 = data_ptr;
			int64_t var$6 = getter->getData();
			$XlibWrapper::memcpy(var$5, var$6, length * getAtomSize());
			var$2 = true;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			getter->dispose();
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

void XAtom::setAtomData(int64_t window, int64_t data_ptr, int32_t length) {
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XChangeProperty($XToolkit::getDisplay(), window, this->atom, this->atom, 32, $XConstants::PropModeReplace, data_ptr, length);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XAtom::setAtomData(int64_t window, int64_t type, int64_t data_ptr, int32_t length) {
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XChangeProperty($XToolkit::getDisplay(), window, this->atom, type, 32, $XConstants::PropModeReplace, data_ptr, length);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XAtom::setAtomData8(int64_t window, int64_t type, int64_t data_ptr, int32_t length) {
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XChangeProperty($XToolkit::getDisplay(), window, this->atom, type, 8, $XConstants::PropModeReplace, data_ptr, length);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XAtom::DeleteProperty(int64_t window) {
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XDeleteProperty($XToolkit::getDisplay(), window, this->atom);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XAtom::DeleteProperty($XBaseWindow* window) {
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow($nc(window)->getWindow());
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XDeleteProperty(var$1, $nc(window)->getWindow(), this->atom);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XAtom::setAtomData(int64_t window, int64_t property_type, $bytes* data) {
	int64_t bdata = $Native::toData(data);
	{
		$var($Throwable, var$0, nullptr);
		try {
			setAtomData8(window, property_type, bdata, $nc(data)->length);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(XAtom::unsafe)->freeMemory(bdata);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$bytes* XAtom::getByteArrayProperty(int64_t window, int64_t property_type) {
	$useLocalCurrentObjectStackCache();
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, window, this, (int64_t)0, (int64_t)0x0000FFFF, false, property_type));
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			int32_t status = getter->execute();
			if (status != $XConstants::Success || getter->getData() == 0) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			bool var$3 = getter->getActualType() != property_type;
			if (var$3 || getter->getActualFormat() != 8) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			$var($bytes, res, $XlibWrapper::getStringBytes(getter->getData()));
			$assign(var$2, res);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			getter->dispose();
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

void XAtom::intern(bool onlyIfExists) {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->atom = $XlibWrapper::InternAtom(this->display, this->name, onlyIfExists ? 1 : 0);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	register$();
}

bool XAtom::isInterned() {
	if (this->atom == 0) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				this->atom = $XlibWrapper::InternAtom(this->display, this->name, 1);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		if (this->atom == 0) {
			return false;
		} else {
			register$();
			return true;
		}
	} else {
		return true;
	}
}

void XAtom::setValues(int64_t display, $String* name, int64_t atom) {
	this->display = display;
	this->atom = atom;
	$set(this, name, name);
	register$();
}

int32_t XAtom::getAtomSize() {
	$init(XAtom);
	return $Native::getLongSize();
}

$XAtomArray* XAtom::getAtomListProperty(int64_t window) {
	$useLocalCurrentObjectStackCache();
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, window, this, (int64_t)0, (int64_t)0x0000FFFF, false, XAtom::XA_ATOM));
	{
		$var($Throwable, var$0, nullptr);
		$var($XAtomArray, var$2, nullptr);
		bool return$1 = false;
		try {
			int32_t status = getter->execute();
			if (status != $XConstants::Success || getter->getData() == 0) {
				$assign(var$2, XAtom::emptyList);
				return$1 = true;
				goto $finally;
			}
			bool var$3 = getter->getActualType() != XAtom::XA_ATOM;
			if (var$3 || getter->getActualFormat() != 32) {
				$assign(var$2, XAtom::emptyList);
				return$1 = true;
				goto $finally;
			}
			int32_t count = getter->getNumberOfItems();
			if (count == 0) {
				$assign(var$2, XAtom::emptyList);
				return$1 = true;
				goto $finally;
			}
			int64_t list_atoms = getter->getData();
			$var($XAtomArray, res, $new($XAtomArray, count));
			for (int32_t index = 0; index < count; ++index) {
				res->set(index, $(XAtom::get(XAtom::getAtom(list_atoms + index * getAtomSize()))));
			}
			$assign(var$2, res);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			getter->dispose();
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

$XAtomList* XAtom::getAtomListPropertyList(int64_t window) {
	return $new($XAtomList, $(getAtomListProperty(window)));
}

$XAtomList* XAtom::getAtomListPropertyList($XBaseWindow* window) {
	return getAtomListPropertyList($nc(window)->getWindow());
}

$XAtomArray* XAtom::getAtomListProperty($XBaseWindow* window) {
	return getAtomListProperty($nc(window)->getWindow());
}

void XAtom::setAtomListProperty(int64_t window, $XAtomArray* atoms) {
	int64_t data = toData(atoms);
	setAtomData(window, XAtom::XA_ATOM, data, $nc(atoms)->length);
	$nc(XAtom::unsafe)->freeMemory(data);
}

void XAtom::setAtomListProperty(int64_t window, $XAtomList* atoms) {
	int64_t data = $nc(atoms)->getAtomsData();
	setAtomData(window, XAtom::XA_ATOM, data, atoms->size());
	$nc(XAtom::unsafe)->freeMemory(data);
}

void XAtom::setAtomListProperty($XBaseWindow* window, $XAtomArray* atoms) {
	setAtomListProperty($nc(window)->getWindow(), atoms);
}

void XAtom::setAtomListProperty($XBaseWindow* window, $XAtomList* atoms) {
	setAtomListProperty($nc(window)->getWindow(), atoms);
}

int64_t XAtom::getAtom() {
	return this->atom;
}

void XAtom::putAtom(int64_t ptr) {
	$Native::putLong(ptr, this->atom);
}

int64_t XAtom::getAtom(int64_t ptr) {
	$init(XAtom);
	return $Native::getLong(ptr);
}

int64_t XAtom::toData($XAtomArray* atoms) {
	$init(XAtom);
	int64_t data = $nc(XAtom::unsafe)->allocateMemory(getAtomSize() * $nc(atoms)->length);
	for (int32_t i = 0; i < $nc(atoms)->length; ++i) {
		if (atoms->get(i) != nullptr) {
			$nc(atoms->get(i))->putAtom(data + i * getAtomSize());
		}
	}
	return data;
}

void XAtom::checkWindow(int64_t window) {
	if (window == 0) {
		$throwNew($IllegalArgumentException, "Window must not be zero"_s);
	}
}

bool XAtom::equals(Object$* o) {
	if (!($instanceOf(XAtom, o))) {
		return false;
	}
	$var(XAtom, ot, $cast(XAtom, o));
	return (this->atom == $nc(ot)->atom && this->display == ot->display);
}

int32_t XAtom::hashCode() {
	return (int32_t)((int64_t)((this->atom ^ this->display) & (uint64_t)(int64_t)65535));
}

void XAtom::setWindowProperty(int64_t window, int64_t window_value) {
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($XlibWrapper);
			$Native::putWindow($XlibWrapper::larg1, window_value);
			$XlibWrapper::XChangeProperty($XToolkit::getDisplay(), window, this->atom, XAtom::XA_WINDOW, 32, $XConstants::PropModeReplace, $XlibWrapper::larg1, 1);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XAtom::setWindowProperty($XBaseWindow* window, $XBaseWindow* window_value) {
	int64_t var$0 = $nc(window)->getWindow();
	setWindowProperty(var$0, $nc(window_value)->getWindow());
}

int64_t XAtom::getWindowProperty(int64_t window) {
	$useLocalCurrentObjectStackCache();
	if (this->atom == 0) {
		$throwNew($IllegalStateException, "Atom should be initialized"_s);
	}
	checkWindow(window);
	$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, window, this, (int64_t)0, (int64_t)1, false, XAtom::XA_WINDOW));
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t status = getter->execute();
			if (status != $XConstants::Success || getter->getData() == 0) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			bool var$3 = getter->getActualType() != XAtom::XA_WINDOW;
			if (var$3 || getter->getActualFormat() != 32) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			var$2 = $Native::getWindow(getter->getData());
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			getter->dispose();
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

void clinit$XAtom($Class* class$) {
	$init($XlibWrapper);
	$assignStatic(XAtom::unsafe, $XlibWrapper::unsafe);
	$assignStatic(XAtom::emptyList, $new($XAtomArray, 0));
	$assignStatic(XAtom::atomToAtom, $new($HashMap));
	$assignStatic(XAtom::nameToAtom, $new($HashMap));
}

XAtom::XAtom() {
}

$Class* XAtom::load$($String* name, bool initialize) {
	$loadClass(XAtom, name, initialize, &_XAtom_ClassInfo_, clinit$XAtom, allocate$XAtom);
	return class$;
}

$Class* XAtom::class$ = nullptr;

		} // X11
	} // awt
} // sun