#include <sun/awt/X11/XWM.h>

#include <java/awt/Frame.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/MWMConstants.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/PropMwmHints.h>
#include <sun/awt/X11/WindowDimensions.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XAtomList.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XCanvasPeer.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler$VerifyChangePropertyHandler.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XLayerProtocol.h>
#include <sun/awt/X11/XNETProtocol.h>
#include <sun/awt/X11/XPanelPeer.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XSetWindowAttributes.h>
#include <sun/awt/X11/XSizeHints.h>
#include <sun/awt/X11/XStateProtocol.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XUtilConstants.h>
#include <sun/awt/X11/XWINProtocol.h>
#include <sun/awt/X11/XWM$1.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef AWT_NET_N_KNOWN_STATES
#undef CDE_WM
#undef COMPIZ_WM
#undef CWM_WM
#undef ENLIGHTEN_WM
#undef FINE
#undef FINER
#undef FINEST
#undef ICE_WM
#undef ICONIFIED
#undef KDE2_WM
#undef LG3D_WM
#undef MAXIMIZED_BOTH
#undef MAXIMIZED_HORIZ
#undef MAXIMIZED_VERT
#undef METACITY_WM
#undef MOTIF_WM
#undef MUTTER_WM
#undef MWM_DECOR_ALL
#undef MWM_DECOR_BORDER
#undef MWM_DECOR_MAXIMIZE
#undef MWM_DECOR_MENU
#undef MWM_DECOR_MINIMIZE
#undef MWM_DECOR_RESIZEH
#undef MWM_DECOR_TITLE
#undef MWM_FUNC_ALL
#undef MWM_FUNC_CLOSE
#undef MWM_FUNC_MAXIMIZE
#undef MWM_FUNC_MINIMIZE
#undef MWM_FUNC_MOVE
#undef MWM_FUNC_RESIZE
#undef MWM_HINTS_DECORATIONS
#undef MWM_HINTS_FUNCTIONS
#undef NORMAL
#undef NO_WM
#undef OPENLOOK_WM
#undef OTHER_WM
#undef PROP_MOTIF_WM_INFO_ELEMENTS
#undef SAWFISH_WM
#undef UNDETERMINED_WM
#undef UNITY_COMPIZ_WM
#undef WMID
#undef XA_CARDINAL
#undef XA_DT_SM_STATE_INFO
#undef XA_DT_SM_WINDOW_INFO
#undef XA_DT_WORKSPACE_CURRENT
#undef XA_ENLIGHTENMENT_COMMS
#undef XA_E_FRAME_SIZE
#undef XA_ICEWM_WINOPTHINT
#undef XA_KDE_NET_WM_FRAME_STRUT
#undef XA_KWM_WIN_ICONIFIED
#undef XA_KWM_WIN_MAXIMIZED
#undef XA_MOTIF_WM_INFO
#undef XA_MWM_HINTS
#undef XA_NET_FRAME_EXTENTS
#undef XA_NET_REQUEST_FRAME_EXTENTS
#undef XA_OL_DECOR_CLOSE
#undef XA_OL_DECOR_DEL
#undef XA_OL_DECOR_HEADER
#undef XA_OL_DECOR_PIN
#undef XA_OL_DECOR_RESIZE
#undef XA_STRING
#undef XA_SUN_WM_PROTOCOLS
#undef XA_UTF8_STRING
#undef XA_WM_STATE
#undef XWM

using $XAtomArray = $Array<::sun::awt::X11::XAtom>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $Frame = ::java::awt::Frame;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $SunToolkit = ::sun::awt::SunToolkit;
using $MWMConstants = ::sun::awt::X11::MWMConstants;
using $Native = ::sun::awt::X11::Native;
using $PropMwmHints = ::sun::awt::X11::PropMwmHints;
using $WindowDimensions = ::sun::awt::X11::WindowDimensions;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtom = ::sun::awt::X11::XAtom;
using $XAtomList = ::sun::awt::X11::XAtomList;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XCanvasPeer = ::sun::awt::X11::XCanvasPeer;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandler$VerifyChangePropertyHandler = ::sun::awt::X11::XErrorHandler$VerifyChangePropertyHandler;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XLayerProtocol = ::sun::awt::X11::XLayerProtocol;
using $XNETProtocol = ::sun::awt::X11::XNETProtocol;
using $XPanelPeer = ::sun::awt::X11::XPanelPeer;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XSetWindowAttributes = ::sun::awt::X11::XSetWindowAttributes;
using $XSizeHints = ::sun::awt::X11::XSizeHints;
using $XStateProtocol = ::sun::awt::X11::XStateProtocol;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XUtilConstants = ::sun::awt::X11::XUtilConstants;
using $XWINProtocol = ::sun::awt::X11::XWINProtocol;
using $XWM$1 = ::sun::awt::X11::XWM$1;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWM_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XWM, $assertionsDisabled)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XWM, log)},
	{"insLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XWM, insLog)},
	{"stateLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XWM, stateLog)},
	{"XA_MWM_HINTS", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_MWM_HINTS)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC, $staticField(XWM, unsafe)},
	{"XA_WM_STATE", "Lsun/awt/X11/XAtom;", nullptr, $STATIC, $staticField(XWM, XA_WM_STATE)},
	{"XA_UTF8_STRING", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XWM, XA_UTF8_STRING)},
	{"AWT_NET_N_KNOWN_STATES", "I", nullptr, $STATIC | $FINAL, $constField(XWM, AWT_NET_N_KNOWN_STATES)},
	{"XA_E_FRAME_SIZE", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_E_FRAME_SIZE)},
	{"XA_KDE_NET_WM_FRAME_STRUT", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_KDE_NET_WM_FRAME_STRUT)},
	{"XA_KWM_WIN_ICONIFIED", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_KWM_WIN_ICONIFIED)},
	{"XA_KWM_WIN_MAXIMIZED", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_KWM_WIN_MAXIMIZED)},
	{"XA_OL_DECOR_DEL", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_OL_DECOR_DEL)},
	{"XA_OL_DECOR_HEADER", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_OL_DECOR_HEADER)},
	{"XA_OL_DECOR_RESIZE", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_OL_DECOR_RESIZE)},
	{"XA_OL_DECOR_PIN", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_OL_DECOR_PIN)},
	{"XA_OL_DECOR_CLOSE", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_OL_DECOR_CLOSE)},
	{"XA_NET_FRAME_EXTENTS", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_NET_FRAME_EXTENTS)},
	{"XA_NET_REQUEST_FRAME_EXTENTS", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_NET_REQUEST_FRAME_EXTENTS)},
	{"UNDETERMINED_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, UNDETERMINED_WM)},
	{"NO_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, NO_WM)},
	{"OTHER_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, OTHER_WM)},
	{"OPENLOOK_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, OPENLOOK_WM)},
	{"MOTIF_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, MOTIF_WM)},
	{"CDE_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, CDE_WM)},
	{"ENLIGHTEN_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, ENLIGHTEN_WM)},
	{"KDE2_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, KDE2_WM)},
	{"SAWFISH_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, SAWFISH_WM)},
	{"ICE_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, ICE_WM)},
	{"METACITY_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, METACITY_WM)},
	{"COMPIZ_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, COMPIZ_WM)},
	{"LG3D_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, LG3D_WM)},
	{"CWM_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, CWM_WM)},
	{"MUTTER_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, MUTTER_WM)},
	{"UNITY_COMPIZ_WM", "I", nullptr, $STATIC | $FINAL, $constField(XWM, UNITY_COMPIZ_WM)},
	{"WMID", "I", nullptr, 0, $field(XWM, WMID)},
	{"zeroInsets", "Ljava/awt/Insets;", nullptr, $STATIC | $FINAL, $staticField(XWM, zeroInsets)},
	{"defaultInsets", "Ljava/awt/Insets;", nullptr, $STATIC | $FINAL, $staticField(XWM, defaultInsets)},
	{"g_net_protocol", "Lsun/awt/X11/XNETProtocol;", nullptr, $STATIC, $staticField(XWM, g_net_protocol)},
	{"g_win_protocol", "Lsun/awt/X11/XWINProtocol;", nullptr, $STATIC, $staticField(XWM, g_win_protocol)},
	{"XA_ENLIGHTENMENT_COMMS", "Lsun/awt/X11/XAtom;", nullptr, $STATIC, $staticField(XWM, XA_ENLIGHTENMENT_COMMS)},
	{"XA_DT_SM_WINDOW_INFO", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_DT_SM_WINDOW_INFO)},
	{"XA_DT_SM_STATE_INFO", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_DT_SM_STATE_INFO)},
	{"XA_MOTIF_WM_INFO", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_MOTIF_WM_INFO)},
	{"XA_DT_WORKSPACE_CURRENT", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_DT_WORKSPACE_CURRENT)},
	{"awtWMNonReparenting", "I", nullptr, $STATIC, $staticField(XWM, awtWMNonReparenting)},
	{"XA_ICEWM_WINOPTHINT", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_ICEWM_WINOPTHINT)},
	{"opt", "[C", nullptr, $STATIC | $FINAL, $staticField(XWM, opt)},
	{"XA_SUN_WM_PROTOCOLS", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XWM, XA_SUN_WM_PROTOCOLS)},
	{"winmgr_running", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XWM, winmgr_running)},
	{"detectWMHandler", "Lsun/awt/X11/XErrorHandler;", nullptr, $PRIVATE | $STATIC, $staticField(XWM, detectWMHandler)},
	{"awt_wmgr", "I", nullptr, $STATIC, $staticField(XWM, awt_wmgr)},
	{"wm", "Lsun/awt/X11/XWM;", nullptr, $STATIC, $staticField(XWM, wm)},
	{"protocolsMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Class<*>;Ljava/util/Collection<*>;>;", $PRIVATE, $field(XWM, protocolsMap)},
	{"inited", "Z", nullptr, $STATIC, $staticField(XWM, inited)},
	{"storedInsets", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Class<*>;Ljava/awt/Insets;>;", 0, $field(XWM, storedInsets)},
	{"awtWMStaticGravity", "I", nullptr, $STATIC, $staticField(XWM, awtWMStaticGravity)},
	{}
};

$MethodInfo _XWM_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(XWM::*)(int32_t)>(&XWM::init$))},
	{"addProtocol", "(Ljava/lang/Class;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;TT;)V", $PRIVATE, $method(static_cast<void(XWM::*)($Class*,Object$*)>(&XWM::addProtocol))},
	{"configureGravityBuggy", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::configureGravityBuggy))},
	{"getECommsWindowIDProperty", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&XWM::getECommsWindowIDProperty))},
	{"getExtendedState", "(Lsun/awt/X11/XWindowPeer;)I", nullptr, 0, $method(static_cast<int32_t(XWM::*)($XWindowPeer*)>(&XWM::getExtendedState))},
	{"getID", "()I", nullptr, 0, $method(static_cast<int32_t(XWM::*)()>(&XWM::getID))},
	{"getInsets", "(Lsun/awt/X11/XDecoratedPeer;JJ)Ljava/awt/Insets;", nullptr, 0, $method(static_cast<$Insets*(XWM::*)($XDecoratedPeer*,int64_t,int64_t)>(&XWM::getInsets))},
	{"getInsetsFromExtents", "(J)Ljava/awt/Insets;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Insets*(*)(int64_t)>(&XWM::getInsetsFromExtents))},
	{"getInsetsFromProp", "(JLsun/awt/X11/XAtom;)Ljava/awt/Insets;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Insets*(*)(int64_t,$XAtom*)>(&XWM::getInsetsFromProp))},
	{"getNETProtocol", "()Lsun/awt/X11/XNETProtocol;", nullptr, $PUBLIC, $method(static_cast<$XNETProtocol*(XWM::*)()>(&XWM::getNETProtocol))},
	{"getProtocols", "(Ljava/lang/Class;)Ljava/util/Collection;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/util/Collection<TT;>;", 0, $method(static_cast<$Collection*(XWM::*)($Class*)>(&XWM::getProtocols))},
	{"getState", "(Lsun/awt/X11/XDecoratedPeer;)I", nullptr, 0, $method(static_cast<int32_t(XWM::*)($XDecoratedPeer*)>(&XWM::getState))},
	{"getWM", "()Lsun/awt/X11/XWM;", nullptr, $STATIC, $method(static_cast<XWM*(*)()>(&XWM::getWM))},
	{"getWMID", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&XWM::getWMID))},
	{"guessInsets", "(Lsun/awt/X11/XDecoratedPeer;)Ljava/awt/Insets;", nullptr, 0, $method(static_cast<$Insets*(XWM::*)($XDecoratedPeer*)>(&XWM::guessInsets))},
	{"init", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XWM::init))},
	{"initAtoms", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XWM::initAtoms))},
	{"initializeProtocols", "()V", nullptr, 0, $method(static_cast<void(XWM::*)()>(&XWM::initializeProtocols))},
	{"isCDE", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isCDE))},
	{"isCWM", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isCWM))},
	{"isCompiz", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isCompiz))},
	{"isDesktopWindow", "(J)Z", nullptr, 0, $method(static_cast<bool(XWM::*)(int64_t)>(&XWM::isDesktopWindow))},
	{"isEnlightenment", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isEnlightenment))},
	{"isIceWM", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isIceWM))},
	{"isKDE2", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isKDE2))},
	{"isLookingGlass", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isLookingGlass))},
	{"isMetacity", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isMetacity))},
	{"isMotif", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isMotif))},
	{"isMutter", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isMutter))},
	{"isNetWMName", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&XWM::isNetWMName))},
	{"isNoWM", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&XWM::isNoWM))},
	{"isNonReparentingWM", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isNonReparentingWM))},
	{"isOpenLook", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isOpenLook))},
	{"isSawfish", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isSawfish))},
	{"isStateChange", "(Lsun/awt/X11/XDecoratedPeer;Lsun/awt/X11/XPropertyEvent;)Z", nullptr, 0, $method(static_cast<bool(XWM::*)($XDecoratedPeer*,$XPropertyEvent*)>(&XWM::isStateChange))},
	{"isUnityCompiz", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::isUnityCompiz))},
	{"needRemap", "(Lsun/awt/X11/XDecoratedPeer;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($XDecoratedPeer*)>(&XWM::needRemap))},
	{"normalize", "(Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $STATIC, $method(static_cast<$Insets*(*)($Insets*)>(&XWM::normalize))},
	{"normalizeMotifDecor", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&XWM::normalizeMotifDecor))},
	{"normalizeMotifFunc", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&XWM::normalizeMotifFunc))},
	{"prepareIsIceWM", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XWM::prepareIsIceWM))},
	{"removeSizeHints", "(Lsun/awt/X11/XDecoratedPeer;J)V", nullptr, $STATIC, $method(static_cast<void(*)($XDecoratedPeer*,int64_t)>(&XWM::removeSizeHints))},
	{"requestWMExtents", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&XWM::requestWMExtents))},
	{"setExtendedState", "(Lsun/awt/X11/XWindowPeer;I)V", nullptr, 0, $method(static_cast<void(XWM::*)($XWindowPeer*,int32_t)>(&XWM::setExtendedState))},
	{"setLayer", "(Lsun/awt/X11/XWindowPeer;I)V", nullptr, 0, $method(static_cast<void(XWM::*)($XWindowPeer*,int32_t)>(&XWM::setLayer))},
	{"setMotifDecor", "(Lsun/awt/X11/XWindow;ZII)V", nullptr, $STATIC, $method(static_cast<void(*)($XWindow*,bool,int32_t,int32_t)>(&XWM::setMotifDecor))},
	{"setNetWMIcon", "(Lsun/awt/X11/XWindowPeer;Ljava/util/List;)Z", "(Lsun/awt/X11/XWindowPeer;Ljava/util/List<Lsun/awt/IconInfo;>;)Z", $PUBLIC, $method(static_cast<bool(XWM::*)($XWindowPeer*,$List*)>(&XWM::setNetWMIcon))},
	{"setOLDecor", "(Lsun/awt/X11/XWindow;ZI)V", nullptr, $STATIC, $method(static_cast<void(*)($XWindow*,bool,int32_t)>(&XWM::setOLDecor))},
	{"setShellDecor", "(Lsun/awt/X11/XDecoratedPeer;)V", nullptr, $STATIC, $method(static_cast<void(*)($XDecoratedPeer*)>(&XWM::setShellDecor))},
	{"setShellNotResizable", "(Lsun/awt/X11/XDecoratedPeer;Lsun/awt/X11/WindowDimensions;Ljava/awt/Rectangle;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($XDecoratedPeer*,$WindowDimensions*,$Rectangle*,bool)>(&XWM::setShellNotResizable))},
	{"setShellResizable", "(Lsun/awt/X11/XDecoratedPeer;)V", nullptr, $STATIC, $method(static_cast<void(*)($XDecoratedPeer*)>(&XWM::setShellResizable))},
	{"supportsDynamicLayout", "()Z", nullptr, 0, $method(static_cast<bool(XWM::*)()>(&XWM::supportsDynamicLayout))},
	{"supportsExtendedState", "(I)Z", nullptr, 0, $method(static_cast<bool(XWM::*)(int32_t)>(&XWM::supportsExtendedState))},
	{"syncTopLevelPos", "(JLsun/awt/X11/XWindowAttributes;)Z", nullptr, 0, $method(static_cast<bool(XWM::*)(int64_t,$XWindowAttributes*)>(&XWM::syncTopLevelPos))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unshadeKludge", "(Lsun/awt/X11/XDecoratedPeer;)V", nullptr, 0, $method(static_cast<void(XWM::*)($XDecoratedPeer*)>(&XWM::unshadeKludge))},
	{}
};

$InnerClassInfo _XWM_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWM$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XWM_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XWM",
	"java.lang.Object",
	nullptr,
	_XWM_FieldInfo_,
	_XWM_MethodInfo_,
	nullptr,
	nullptr,
	_XWM_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XWM$1"
};

$Object* allocate$XWM($Class* clazz) {
	return $of($alloc(XWM));
}

bool XWM::$assertionsDisabled = false;
$PlatformLogger* XWM::log = nullptr;
$PlatformLogger* XWM::insLog = nullptr;
$PlatformLogger* XWM::stateLog = nullptr;
$XAtom* XWM::XA_MWM_HINTS = nullptr;
$Unsafe* XWM::unsafe = nullptr;
$XAtom* XWM::XA_WM_STATE = nullptr;
$XAtom* XWM::XA_E_FRAME_SIZE = nullptr;
$XAtom* XWM::XA_KDE_NET_WM_FRAME_STRUT = nullptr;
$XAtom* XWM::XA_KWM_WIN_ICONIFIED = nullptr;
$XAtom* XWM::XA_KWM_WIN_MAXIMIZED = nullptr;
$XAtom* XWM::XA_OL_DECOR_DEL = nullptr;
$XAtom* XWM::XA_OL_DECOR_HEADER = nullptr;
$XAtom* XWM::XA_OL_DECOR_RESIZE = nullptr;
$XAtom* XWM::XA_OL_DECOR_PIN = nullptr;
$XAtom* XWM::XA_OL_DECOR_CLOSE = nullptr;
$XAtom* XWM::XA_NET_FRAME_EXTENTS = nullptr;
$XAtom* XWM::XA_NET_REQUEST_FRAME_EXTENTS = nullptr;
$Insets* XWM::zeroInsets = nullptr;
$Insets* XWM::defaultInsets = nullptr;
$XNETProtocol* XWM::g_net_protocol = nullptr;
$XWINProtocol* XWM::g_win_protocol = nullptr;
$XAtom* XWM::XA_ENLIGHTENMENT_COMMS = nullptr;
$XAtom* XWM::XA_DT_SM_WINDOW_INFO = nullptr;
$XAtom* XWM::XA_DT_SM_STATE_INFO = nullptr;
$XAtom* XWM::XA_MOTIF_WM_INFO = nullptr;
$XAtom* XWM::XA_DT_WORKSPACE_CURRENT = nullptr;
int32_t XWM::awtWMNonReparenting = 0;
$XAtom* XWM::XA_ICEWM_WINOPTHINT = nullptr;
$chars* XWM::opt = nullptr;
$XAtom* XWM::XA_SUN_WM_PROTOCOLS = nullptr;
bool XWM::winmgr_running = false;
$XErrorHandler* XWM::detectWMHandler = nullptr;
int32_t XWM::awt_wmgr = 0;
XWM* XWM::wm = nullptr;
bool XWM::inited = false;
int32_t XWM::awtWMStaticGravity = 0;

$String* XWM::toString() {
	switch (this->WMID) {
	case XWM::NO_WM:
		{
			return "NO WM"_s;
		}
	case XWM::OTHER_WM:
		{
			return "Other WM"_s;
		}
	case XWM::OPENLOOK_WM:
		{
			return "OPENLOOK"_s;
		}
	case XWM::MOTIF_WM:
		{
			return "MWM"_s;
		}
	case XWM::CDE_WM:
		{
			return "DTWM"_s;
		}
	case XWM::ENLIGHTEN_WM:
		{
			return "Enlightenment"_s;
		}
	case XWM::KDE2_WM:
		{
			return "KWM2"_s;
		}
	case XWM::SAWFISH_WM:
		{
			return "Sawfish"_s;
		}
	case XWM::ICE_WM:
		{
			return "IceWM"_s;
		}
	case XWM::METACITY_WM:
		{
			return "Metacity"_s;
		}
	case XWM::COMPIZ_WM:
		{
			return "Compiz"_s;
		}
	case XWM::UNITY_COMPIZ_WM:
		{
			return "Unity Compiz"_s;
		}
	case XWM::LG3D_WM:
		{
			return "LookingGlass"_s;
		}
	case XWM::CWM_WM:
		{
			return "CWM"_s;
		}
	case XWM::MUTTER_WM:
		{
			return "Mutter"_s;
		}
	case XWM::UNDETERMINED_WM:
		{}
	default:
		{
			return "Undetermined WM"_s;
		}
	}
}

void XWM::init$(int32_t WMID) {
	$useLocalCurrentObjectStackCache();
	$set(this, XA_UTF8_STRING, $XAtom::get("UTF8_STRING"_s));
	$set(this, protocolsMap, $new($HashMap));
	$set(this, storedInsets, $new($HashMap));
	this->WMID = WMID;
	initializeProtocols();
	$init($PlatformLogger$Level);
	if ($nc(XWM::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWM::log)->fine($$str({"Window manager: "_s, $(toString())}));
	}
}

int32_t XWM::getID() {
	return this->WMID;
}

$Insets* XWM::normalize($Insets* insets) {
	$init(XWM);
	if ($nc(insets)->top > 64 || $nc(insets)->top < 0) {
		insets->top = 28;
	}
	if ($nc(insets)->left > 32 || $nc(insets)->left < 0) {
		insets->left = 6;
	}
	if ($nc(insets)->right > 32 || $nc(insets)->right < 0) {
		insets->right = 6;
	}
	if ($nc(insets)->bottom > 32 || $nc(insets)->bottom < 0) {
		insets->bottom = 6;
	}
	return insets;
}

bool XWM::isNetWMName($String* name) {
	$init(XWM);
	if (XWM::g_net_protocol != nullptr) {
		return $nc(XWM::g_net_protocol)->isWMName(name);
	} else {
		return false;
	}
}

void XWM::initAtoms() {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, atomInitList, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of(XWM::XA_WM_STATE),
			$of("WM_STATE"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_KDE_NET_WM_FRAME_STRUT),
			$of("_KDE_NET_WM_FRAME_STRUT"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_E_FRAME_SIZE),
			$of("_E_FRAME_SIZE"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_KWM_WIN_ICONIFIED),
			$of("KWM_WIN_ICONIFIED"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_KWM_WIN_MAXIMIZED),
			$of("KWM_WIN_MAXIMIZED"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_OL_DECOR_DEL),
			$of("_OL_DECOR_DEL"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_OL_DECOR_HEADER),
			$of("_OL_DECOR_HEADER"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_OL_DECOR_RESIZE),
			$of("_OL_DECOR_RESIZE"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_OL_DECOR_PIN),
			$of("_OL_DECOR_PIN"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_OL_DECOR_CLOSE),
			$of("_OL_DECOR_CLOSE"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_MWM_HINTS),
			$of("_MOTIF_WM_HINTS"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_NET_FRAME_EXTENTS),
			$of("_NET_FRAME_EXTENTS"_s)
		}),
		$$new($ObjectArray, {
			$of(XWM::XA_NET_REQUEST_FRAME_EXTENTS),
			$of("_NET_REQUEST_FRAME_EXTENTS"_s)
		})
	}));
	$var($StringArray, names, $new($StringArray, atomInitList->length));
	for (int32_t index = 0; index < names->length; ++index) {
		names->set(index, $cast($String, $nc(atomInitList->get(index))->get(1)));
	}
	int32_t atomSize = $XAtom::getAtomSize();
	int64_t atoms = $nc(XWM::unsafe)->allocateMemory(names->length * atomSize);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			int32_t status = $XlibWrapper::XInternAtoms($XToolkit::getDisplay(), names, false, atoms);
			if (status == 0) {
				return$1 = true;
				goto $finally;
			}
			{
				int32_t atom = 0;
				int32_t atomPtr = 0;
				for (; atom < names->length; ++atom, atomPtr += atomSize) {
					int64_t var$2 = $XToolkit::getDisplay();
					$var($String, var$3, names->get(atom));
					$nc((($cast($XAtom, $nc(atomInitList->get(atom))->get(0)))))->setValues(var$2, var$3, $XAtom::getAtom(atoms + atomPtr));
				}
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$XToolkit::awtUnlock();
			$nc(XWM::unsafe)->freeMemory(atoms);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

bool XWM::isNoWM() {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	$var($String, vendor_string, $XlibWrapper::ServerVendor($XToolkit::getDisplay()));
	if ($nc(vendor_string)->indexOf("eXcursion"_s) != -1) {
		$init($PlatformLogger$Level);
		if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWM::insLog)->finer("eXcursion means NO_WM"_s);
		}
		return true;
	}
	$var($XSetWindowAttributes, substruct, $new($XSetWindowAttributes));
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			int64_t default_screen_number = $XlibWrapper::DefaultScreen($XToolkit::getDisplay());
			$var($String, selection_name, $str({"WM_S"_s, $$str(default_screen_number)}));
			int64_t var$3 = $XToolkit::getDisplay();
			int64_t selection_owner = $XlibWrapper::XGetSelectionOwner(var$3, $nc($($XAtom::get(selection_name)))->getAtom());
			$init($PlatformLogger$Level);
			if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(XWM::insLog)->finer($$str({"selection owner of "_s, selection_name, " is "_s, $$str(selection_owner)}));
			}
			if (selection_owner != $XConstants::None) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			XWM::winmgr_running = false;
			substruct->set_event_mask($XConstants::SubstructureRedirectMask);
			$XErrorHandlerUtil::WITH_XERROR_HANDLER(XWM::detectWMHandler);
			int64_t var$4 = $XToolkit::getDisplay();
			$XlibWrapper::XChangeWindowAttributes(var$4, $XToolkit::getDefaultRootWindow(), $XConstants::CWEventMask, substruct->pData);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (!XWM::winmgr_running) {
				substruct->set_event_mask(0);
				int64_t var$5 = $XToolkit::getDisplay();
				$XlibWrapper::XChangeWindowAttributes(var$5, $XToolkit::getDefaultRootWindow(), $XConstants::CWEventMask, substruct->pData);
				if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XWM::insLog)->finer("It looks like there is no WM thus NO_WM"_s);
				}
			}
			var$2 = !XWM::winmgr_running;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} $finally: {
			substruct->dispose();
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

int64_t XWM::getECommsWindowIDProperty(int64_t window) {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	if (!$nc(XWM::XA_ENLIGHTENMENT_COMMS)->isInterned()) {
		return 0;
	}
	$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, window, XWM::XA_ENLIGHTENMENT_COMMS, (int64_t)0, (int64_t)14, false, $XAtom::XA_STRING));
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t status = getter->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			if (status != $XConstants::Success || getter->getData() == 0) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			bool var$5 = getter->getActualType() != $XAtom::XA_STRING;
			bool var$4 = var$5 || getter->getActualFormat() != 8;
			bool var$3 = var$4 || getter->getNumberOfItems() != 14;
			if (var$3 || getter->getBytesAfter() != 0) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			$var($bytes, bytes, $XlibWrapper::getStringBytes(getter->getData()));
			$var($String, id, $new($String, bytes));
			$init($PlatformLogger$Level);
			if ($nc(XWM::log)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(XWM::log)->finer($$str({"ENLIGHTENMENT_COMMS is "_s, id}));
			}
			$var($Pattern, winIdPat, $Pattern::compile("WINID\\s+(\\p{XDigit}{0,8})"_s));
			try {
				$var($Matcher, match, $nc(winIdPat)->matcher(id));
				if ($nc(match)->matches()) {
					if ($nc(XWM::log)->isLoggable($PlatformLogger$Level::FINEST)) {
						$nc(XWM::log)->finest($$str({"Match group count: "_s, $$str(match->groupCount())}));
					}
					$var($String, longId, match->group(1));
					if ($nc(XWM::log)->isLoggable($PlatformLogger$Level::FINEST)) {
						$nc(XWM::log)->finest($$str({"Match group 1 "_s, longId}));
					}
					int64_t winid = $Long::parseLong(longId, 16);
					if ($nc(XWM::log)->isLoggable($PlatformLogger$Level::FINER)) {
						$nc(XWM::log)->finer($$str({"Enlightenment communication window "_s, $$str(winid)}));
					}
					var$2 = winid;
					return$1 = true;
					goto $finally;
				} else {
					$nc(XWM::log)->finer("ENLIGHTENMENT_COMMS has wrong format"_s);
					var$2 = 0;
					return$1 = true;
					goto $finally;
				}
			} catch ($Exception& e) {
				if ($nc(XWM::log)->isLoggable($PlatformLogger$Level::FINER)) {
					e->printStackTrace();
				}
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
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

bool XWM::isEnlightenment() {
	$init(XWM);
	int64_t root_xref = getECommsWindowIDProperty($XToolkit::getDefaultRootWindow());
	if (root_xref == 0) {
		return false;
	}
	int64_t self_xref = getECommsWindowIDProperty(root_xref);
	if (self_xref != root_xref) {
		return false;
	}
	return true;
}

bool XWM::isCDE() {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	if (!$nc(XWM::XA_DT_SM_WINDOW_INFO)->isInterned()) {
		$init($PlatformLogger$Level);
		if ($nc(XWM::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWM::log)->finer("{0} is not interned"_s, $$new($ObjectArray, {$of(XWM::XA_DT_SM_WINDOW_INFO)}));
		}
		return false;
	}
	$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, $XToolkit::getDefaultRootWindow(), XWM::XA_DT_SM_WINDOW_INFO, (int64_t)0, (int64_t)2, false, XWM::XA_DT_SM_WINDOW_INFO));
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			int32_t status = getter->execute();
			if (status != $XConstants::Success || getter->getData() == 0) {
				$nc(XWM::log)->finer("Getting of _DT_SM_WINDOW_INFO is not successfull"_s);
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			int64_t var$6 = getter->getActualType();
			bool var$5 = var$6 != $nc(XWM::XA_DT_SM_WINDOW_INFO)->getAtom();
			bool var$4 = var$5 || getter->getActualFormat() != 32;
			bool var$3 = var$4 || getter->getNumberOfItems() != 2;
			if (var$3 || getter->getBytesAfter() != 0) {
				$nc(XWM::log)->finer("Wrong format of _DT_SM_WINDOW_INFO"_s);
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			int64_t wmwin = $Native::getWindow(getter->getData(), 1);
			if (wmwin == 0) {
				$nc(XWM::log)->fine("WARNING: DT_SM_WINDOW_INFO exists but returns zero windows"_s);
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			if (!$nc(XWM::XA_DT_SM_STATE_INFO)->isInterned()) {
				$init($PlatformLogger$Level);
				if ($nc(XWM::log)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XWM::log)->finer("{0} is not interned"_s, $$new($ObjectArray, {$of(XWM::XA_DT_SM_STATE_INFO)}));
				}
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			$var($WindowPropertyGetter, getter2, $new($WindowPropertyGetter, wmwin, XWM::XA_DT_SM_STATE_INFO, (int64_t)0, (int64_t)1, false, XWM::XA_DT_SM_STATE_INFO));
			{
				$var($Throwable, var$7, nullptr);
				bool var$9 = false;
				bool return$8 = false;
				try {
					status = getter2->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
					if (status != $XConstants::Success || getter2->getData() == 0) {
						$nc(XWM::log)->finer("Getting of _DT_SM_STATE_INFO is not successfull"_s);
						var$9 = false;
						return$8 = true;
						goto $finally1;
					}
					int64_t var$11 = getter2->getActualType();
					bool var$10 = var$11 != $nc(XWM::XA_DT_SM_STATE_INFO)->getAtom();
					if (var$10 || getter2->getActualFormat() != 32) {
						$nc(XWM::log)->finer("Wrong format of _DT_SM_STATE_INFO"_s);
						var$9 = false;
						return$8 = true;
						goto $finally1;
					}
					var$9 = true;
					return$8 = true;
					goto $finally1;
				} catch ($Throwable& var$12) {
					$assign(var$7, var$12);
				} $finally1: {
					getter2->dispose();
				}
				if (var$7 != nullptr) {
					$throw(var$7);
				}
				if (return$8) {
					var$2 = var$9;
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable& var$13) {
			$assign(var$0, var$13);
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

bool XWM::isMotif() {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	if (!($nc(XWM::XA_MOTIF_WM_INFO)->isInterned())) {
		return false;
	}
	$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, $XToolkit::getDefaultRootWindow(), XWM::XA_MOTIF_WM_INFO, (int64_t)0, (int64_t)$MWMConstants::PROP_MOTIF_WM_INFO_ELEMENTS, false, XWM::XA_MOTIF_WM_INFO));
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
			int64_t var$6 = getter->getActualType();
			bool var$5 = var$6 != $nc(XWM::XA_MOTIF_WM_INFO)->getAtom();
			bool var$4 = var$5 || getter->getActualFormat() != 32;
			bool var$3 = var$4 || getter->getNumberOfItems() != $MWMConstants::PROP_MOTIF_WM_INFO_ELEMENTS;
			if (var$3 || getter->getBytesAfter() != 0) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			int64_t wmwin = $Native::getLong(getter->getData(), 1);
			if (wmwin != 0) {
				if ($nc(XWM::XA_DT_WORKSPACE_CURRENT)->isInterned()) {
					$var($XAtomArray, curws, $nc(XWM::XA_DT_WORKSPACE_CURRENT)->getAtomListProperty(wmwin));
					if ($nc(curws)->length == 0) {
						var$2 = false;
						return$1 = true;
						goto $finally;
					}
					var$2 = true;
					return$1 = true;
					goto $finally;
				} else {
					$var($WindowPropertyGetter, state_getter, $new($WindowPropertyGetter, wmwin, XWM::XA_WM_STATE, (int64_t)0, (int64_t)1, false, XWM::XA_WM_STATE));
					{
						$var($Throwable, var$7, nullptr);
						bool var$9 = false;
						bool return$8 = false;
						try {
							bool var$11 = state_getter->execute() == $XConstants::Success;
							bool var$10 = var$11 && state_getter->getData() != 0;
							if (var$10) {
								int64_t var$12 = state_getter->getActualType();
								var$10 = var$12 == $nc(XWM::XA_WM_STATE)->getAtom();
							}
							if (var$10) {
								var$9 = true;
								return$8 = true;
								goto $finally1;
							}
						} catch ($Throwable& var$13) {
							$assign(var$7, var$13);
						} $finally1: {
							state_getter->dispose();
						}
						if (var$7 != nullptr) {
							$throw(var$7);
						}
						if (return$8) {
							var$2 = var$9;
							return$1 = true;
							goto $finally;
						}
					}
				}
			}
		} catch ($Throwable& var$14) {
			$assign(var$0, var$14);
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
	return false;
}

bool XWM::isSawfish() {
	$init(XWM);
	return isNetWMName("Sawfish"_s);
}

bool XWM::isKDE2() {
	$init(XWM);
	return isNetWMName("KWin"_s);
}

bool XWM::isCompiz() {
	$init(XWM);
	return isNetWMName("compiz"_s);
}

bool XWM::isUnityCompiz() {
	$init(XWM);
	return isNetWMName("Compiz"_s);
}

bool XWM::isLookingGlass() {
	$init(XWM);
	return isNetWMName("LG3D"_s);
}

bool XWM::isCWM() {
	$init(XWM);
	return isNetWMName("CWM"_s);
}

bool XWM::isMetacity() {
	$init(XWM);
	return isNetWMName("Metacity"_s);
}

bool XWM::isMutter() {
	$init(XWM);
	bool var$0 = isNetWMName("Mutter"_s);
	return var$0 || isNetWMName("GNOME Shell"_s);
}

bool XWM::isNonReparentingWM() {
	$init(XWM);
	if (XWM::awtWMNonReparenting == -1) {
		XWM::awtWMNonReparenting = ($XToolkit::getEnv("_JAVA_AWT_WM_NONREPARENTING"_s) != nullptr) ? 1 : 0;
	}
	bool var$1 = XWM::awtWMNonReparenting == 1 || XWM::getWMID() == XWM::COMPIZ_WM;
	bool var$0 = var$1 || XWM::getWMID() == XWM::LG3D_WM;
	return (var$0 || XWM::getWMID() == XWM::CWM_WM);
}

bool XWM::prepareIsIceWM() {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	if (!$nc(XWM::XA_ICEWM_WINOPTHINT)->isInterned()) {
		$init($PlatformLogger$Level);
		if ($nc(XWM::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWM::log)->finer("{0} is not interned"_s, $$new($ObjectArray, {$of(XWM::XA_ICEWM_WINOPTHINT)}));
		}
		return false;
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			int64_t var$3 = $XToolkit::getDisplay();
			int64_t var$4 = $XToolkit::getDefaultRootWindow();
			int64_t var$5 = $nc(XWM::XA_ICEWM_WINOPTHINT)->getAtom();
			int64_t var$6 = $nc(XWM::XA_ICEWM_WINOPTHINT)->getAtom();
			$XlibWrapper::XChangePropertyS(var$3, var$4, var$5, var$6, 8, $XConstants::PropModeReplace, $$new($String, XWM::opt));
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				$nc(XWM::log)->finer("Erorr getting XA_ICEWM_WINOPTHINT property"_s);
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			$nc(XWM::log)->finer("Prepared for IceWM detection"_s);
			var$2 = true;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
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

bool XWM::isIceWM() {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	if (!$nc(XWM::XA_ICEWM_WINOPTHINT)->isInterned()) {
		$init($PlatformLogger$Level);
		if ($nc(XWM::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWM::log)->finer("{0} is not interned"_s, $$new($ObjectArray, {$of(XWM::XA_ICEWM_WINOPTHINT)}));
		}
		return false;
	}
	$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, $XToolkit::getDefaultRootWindow(), XWM::XA_ICEWM_WINOPTHINT, (int64_t)0, (int64_t)0x0000FFFF, true, XWM::XA_ICEWM_WINOPTHINT));
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			int32_t status = getter->execute();
			bool res = (status == $XConstants::Success && getter->getActualType() != 0);
			$init($PlatformLogger$Level);
			if ($nc(XWM::log)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(XWM::log)->finer($$str({"Status getting XA_ICEWM_WINOPTHINT: "_s, $$str(!res)}));
			}
			var$2 = !res || isNetWMName("IceWM"_s);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
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

bool XWM::isOpenLook() {
	$init(XWM);
	if (!$nc(XWM::XA_SUN_WM_PROTOCOLS)->isInterned()) {
		return false;
	}
	$var($XAtomArray, list, $nc(XWM::XA_SUN_WM_PROTOCOLS)->getAtomListProperty($XToolkit::getDefaultRootWindow()));
	return ($nc(list)->length != 0);
}

XWM* XWM::getWM() {
	$init(XWM);
	if (XWM::wm == nullptr) {
		$assignStatic(XWM::wm, $new(XWM, XWM::awt_wmgr = getWMID()));
	}
	return XWM::wm;
}

int32_t XWM::getWMID() {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XWM::insLog)->finest($$str({"awt_wmgr = "_s, $$str(XWM::awt_wmgr)}));
	}
	if (XWM::awt_wmgr != XWM::UNDETERMINED_WM) {
		return XWM::awt_wmgr;
	}
	$var($XSetWindowAttributes, substruct, $new($XSetWindowAttributes));
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (isNoWM()) {
				XWM::awt_wmgr = XWM::NO_WM;
				var$2 = XWM::awt_wmgr;
				return$1 = true;
				goto $finally;
			}
			$var($XNETProtocol, l_net_protocol, $assignStatic(XWM::g_net_protocol, $new($XNETProtocol)));
			$nc(l_net_protocol)->detect();
			bool var$3 = $nc(XWM::log)->isLoggable($PlatformLogger$Level::FINE);
			if (var$3 && l_net_protocol->active()) {
				$nc(XWM::log)->fine($$str({"_NET_WM_NAME is "_s, $(l_net_protocol->getWMName())}));
			}
			$var($XWINProtocol, win, $assignStatic(XWM::g_win_protocol, $new($XWINProtocol)));
			$nc(win)->detect();
			bool doIsIceWM = prepareIsIceWM();
			if (isEnlightenment()) {
				XWM::awt_wmgr = XWM::ENLIGHTEN_WM;
			} else if (isMetacity()) {
				XWM::awt_wmgr = XWM::METACITY_WM;
			} else if (isMutter()) {
				XWM::awt_wmgr = XWM::MUTTER_WM;
			} else if (isSawfish()) {
				XWM::awt_wmgr = XWM::SAWFISH_WM;
			} else if (isKDE2()) {
				XWM::awt_wmgr = XWM::KDE2_WM;
			} else if (isCompiz()) {
				XWM::awt_wmgr = XWM::COMPIZ_WM;
			} else if (isLookingGlass()) {
				XWM::awt_wmgr = XWM::LG3D_WM;
			} else if (isCWM()) {
				XWM::awt_wmgr = XWM::CWM_WM;
			} else if (doIsIceWM && isIceWM()) {
				XWM::awt_wmgr = XWM::ICE_WM;
			} else if (isUnityCompiz()) {
				XWM::awt_wmgr = XWM::UNITY_COMPIZ_WM;
			} else if (l_net_protocol->active()) {
				XWM::awt_wmgr = XWM::OTHER_WM;
			} else if (win->active()) {
				XWM::awt_wmgr = XWM::OTHER_WM;
			} else if (isCDE()) {
				XWM::awt_wmgr = XWM::CDE_WM;
			} else if (isMotif()) {
				XWM::awt_wmgr = XWM::MOTIF_WM;
			} else if (isOpenLook()) {
				XWM::awt_wmgr = XWM::OPENLOOK_WM;
			} else {
				XWM::awt_wmgr = XWM::OTHER_WM;
			}
			var$2 = XWM::awt_wmgr;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$XToolkit::awtUnlock();
			substruct->dispose();
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

void XWM::removeSizeHints($XDecoratedPeer* window, int64_t mask) {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	mask &= (uint64_t)($XUtilConstants::PMaxSize | $XUtilConstants::PMinSize);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			$var($XSizeHints, hints, $nc(window)->getHints());
			if (((int64_t)($nc(hints)->get_flags() & (uint64_t)mask)) == 0) {
				return$1 = true;
				goto $finally;
			}
			$nc(hints)->set_flags((int64_t)(hints->get_flags() & (uint64_t)~mask));
			$init($PlatformLogger$Level);
			if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(XWM::insLog)->finer($$str({"Setting hints, flags "_s, $($XlibWrapper::hintsToString(hints->get_flags()))}));
			}
			int64_t var$2 = $XToolkit::getDisplay();
			$XlibWrapper::XSetWMNormalHints(var$2, window->getWindow(), hints->pData);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
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

int32_t XWM::normalizeMotifDecor(int32_t decorations) {
	$init(XWM);
	if (((int32_t)(decorations & (uint32_t)$MWMConstants::MWM_DECOR_ALL)) == 0) {
		return decorations;
	}
	int32_t d = (((($MWMConstants::MWM_DECOR_BORDER | $MWMConstants::MWM_DECOR_RESIZEH) | $MWMConstants::MWM_DECOR_TITLE) | $MWMConstants::MWM_DECOR_MENU) | $MWMConstants::MWM_DECOR_MINIMIZE) | $MWMConstants::MWM_DECOR_MAXIMIZE;
	d &= (uint32_t)~decorations;
	return d;
}

int32_t XWM::normalizeMotifFunc(int32_t functions) {
	$init(XWM);
	if (((int32_t)(functions & (uint32_t)$MWMConstants::MWM_FUNC_ALL)) == 0) {
		return functions;
	}
	int32_t f = ((($MWMConstants::MWM_FUNC_RESIZE | $MWMConstants::MWM_FUNC_MOVE) | $MWMConstants::MWM_FUNC_MAXIMIZE) | $MWMConstants::MWM_FUNC_MINIMIZE) | $MWMConstants::MWM_FUNC_CLOSE;
	f &= (uint32_t)~functions;
	return f;
}

void XWM::setOLDecor($XWindow* window, bool resizable, int32_t decorations) {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	if (window == nullptr) {
		return;
	}
	$var($XAtomList, decorDel, $new($XAtomList));
	decorations = normalizeMotifDecor(decorations);
	$init($PlatformLogger$Level);
	if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XWM::insLog)->finer($$str({"Setting OL_DECOR to "_s, $($Integer::toBinaryString(decorations))}));
	}
	if (((int32_t)(decorations & (uint32_t)$MWMConstants::MWM_DECOR_TITLE)) == 0) {
		decorDel->add(XWM::XA_OL_DECOR_HEADER);
	}
	if (((int32_t)(decorations & (uint32_t)($MWMConstants::MWM_DECOR_RESIZEH | $MWMConstants::MWM_DECOR_MAXIMIZE))) == 0) {
		decorDel->add(XWM::XA_OL_DECOR_RESIZE);
	}
	if (((int32_t)(decorations & (uint32_t)(($MWMConstants::MWM_DECOR_MENU | $MWMConstants::MWM_DECOR_MAXIMIZE) | $MWMConstants::MWM_DECOR_MINIMIZE))) == 0) {
		decorDel->add(XWM::XA_OL_DECOR_CLOSE);
	}
	if (decorDel->size() == 0) {
		$nc(XWM::insLog)->finer("Deleting OL_DECOR"_s);
		$nc(XWM::XA_OL_DECOR_DEL)->DeleteProperty(static_cast<$XBaseWindow*>(window));
	} else {
		if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWM::insLog)->finer($$str({"Setting OL_DECOR to "_s, decorDel}));
		}
		$nc(XWM::XA_OL_DECOR_DEL)->setAtomListProperty(static_cast<$XBaseWindow*>(window), decorDel);
	}
}

void XWM::setMotifDecor($XWindow* window, bool resizable, int32_t decorations, int32_t functions) {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	if (((int32_t)(decorations & (uint32_t)$MWMConstants::MWM_DECOR_ALL)) != 0 && (decorations != $MWMConstants::MWM_DECOR_ALL)) {
		decorations = normalizeMotifDecor(decorations);
	}
	if (((int32_t)(functions & (uint32_t)$MWMConstants::MWM_FUNC_ALL)) != 0 && (functions != $MWMConstants::MWM_FUNC_ALL)) {
		functions = normalizeMotifFunc(functions);
	}
	$var($PropMwmHints, hints, $nc(window)->getMWMHints());
	$nc(hints)->set_flags((hints->get_flags() | $MWMConstants::MWM_HINTS_FUNCTIONS) | $MWMConstants::MWM_HINTS_DECORATIONS);
	hints->set_functions(functions);
	hints->set_decorations(decorations);
	$init($PlatformLogger$Level);
	if ($nc(XWM::stateLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XWM::stateLog)->finer($$str({"Setting MWM_HINTS to "_s, hints}));
	}
	window->setMWMHints(hints);
}

bool XWM::needRemap($XDecoratedPeer* window) {
	$init(XWM);
	return !$nc(window)->isEmbedded();
}

void XWM::setShellDecor($XDecoratedPeer* window) {
	$init(XWM);
	int32_t decorations = $nc(window)->getDecorations();
	int32_t functions = window->getFunctions();
	bool resizable = window->isResizable();
	if (!resizable) {
		if (((int32_t)(decorations & (uint32_t)$MWMConstants::MWM_DECOR_ALL)) != 0) {
			decorations |= $MWMConstants::MWM_DECOR_RESIZEH | $MWMConstants::MWM_DECOR_MAXIMIZE;
		} else {
			decorations &= (uint32_t)~($MWMConstants::MWM_DECOR_RESIZEH | $MWMConstants::MWM_DECOR_MAXIMIZE);
		}
	}
	setMotifDecor(window, resizable, decorations, functions);
	setOLDecor(window, resizable, decorations);
	bool var$0 = window->isShowing();
	if (var$0 && needRemap(window)) {
		window->xSetVisible(false);
		$XToolkit::XSync();
		window->xSetVisible(true);
	}
}

void XWM::setShellResizable($XDecoratedPeer* window) {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWM::insLog)->fine($$str({"Setting shell resizable "_s, window}));
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Rectangle, shellBounds, nullptr);
			if (getWMID() != XWM::UNITY_COMPIZ_WM) {
				$assign(shellBounds, $nc(window)->getShellBounds());
				$nc(shellBounds)->translate(-$nc(window->currentInsets)->left, -$nc(window->currentInsets)->top);
			} else {
				$assign(shellBounds, $nc($($nc(window)->getDimensions()))->getScreenBounds());
			}
			$nc(window)->updateSizeHints($(window->getDimensions()));
			requestWMExtents(window->getWindow());
			int64_t var$1 = $XToolkit::getDisplay();
			int64_t var$2 = window->getShell();
			int32_t var$3 = window->scaleUp($nc(shellBounds)->x);
			int32_t var$4 = window->scaleUp($nc(shellBounds)->y);
			int32_t var$5 = window->scaleUp($nc(shellBounds)->width);
			$XlibWrapper::XMoveResizeWindow(var$1, var$2, var$3, var$4, var$5, window->scaleUp($nc(shellBounds)->height));
			removeSizeHints(window, $XUtilConstants::PMaxSize);
			window->updateMinimumSize();
			setShellDecor(window);
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XWM::setShellNotResizable($XDecoratedPeer* window, $WindowDimensions* newDimensions, $Rectangle* shellBounds, bool justChangeSize) {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWM::insLog)->fine($$str({"Setting non-resizable shell "_s, window, ", dimensions "_s, newDimensions, ", shellBounds "_s, shellBounds, ", just change size: "_s, $$str(justChangeSize)}));
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!$nc(shellBounds)->isEmpty()) {
				$nc(window)->updateSizeHints(newDimensions);
				requestWMExtents(window->getWindow());
				$XToolkit::XSync();
				int64_t var$1 = $XToolkit::getDisplay();
				int64_t var$2 = window->getShell();
				int32_t var$3 = window->scaleUp(shellBounds->x);
				int32_t var$4 = window->scaleUp(shellBounds->y);
				int32_t var$5 = window->scaleUp(shellBounds->width);
				$XlibWrapper::XMoveResizeWindow(var$1, var$2, var$3, var$4, var$5, window->scaleUp(shellBounds->height));
			}
			if (!justChangeSize) {
				setShellDecor(window);
			}
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Collection* XWM::getProtocols($Class* protocolInterface) {
	$var($Collection, res, $cast($Collection, $nc(this->protocolsMap)->get(protocolInterface)));
	if (res != nullptr) {
		return res;
	} else {
		return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$AbstractSequentialList*>($new($LinkedList)))));
	}
}

void XWM::addProtocol($Class* protocolInterface, Object$* protocol) {
	$var($Collection, protocols, getProtocols(protocolInterface));
	$nc(protocols)->add(protocol);
	$nc(this->protocolsMap)->put(protocolInterface, protocols);
}

bool XWM::supportsDynamicLayout() {
	int32_t wm = getWMID();
	switch (wm) {
	case XWM::ENLIGHTEN_WM:
		{}
	case XWM::KDE2_WM:
		{}
	case XWM::SAWFISH_WM:
		{}
	case XWM::ICE_WM:
		{}
	case XWM::METACITY_WM:
		{
			return true;
		}
	case XWM::OPENLOOK_WM:
		{}
	case XWM::MOTIF_WM:
		{}
	case XWM::CDE_WM:
		{
			return false;
		}
	default:
		{
			return false;
		}
	}
}

bool XWM::supportsExtendedState(int32_t state) {
	$useLocalCurrentObjectStackCache();
	switch (state) {
	case $Frame::MAXIMIZED_VERT:
		{}
	case $Frame::MAXIMIZED_HORIZ:
		{
			if (getWMID() == XWM::METACITY_WM) {
				return false;
			}
		}
	case $Frame::MAXIMIZED_BOTH:
		{
			{
				$load($XStateProtocol);
				$var($Iterator, i$, $nc($(getProtocols($XStateProtocol::class$)))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($XStateProtocol, proto, $cast($XStateProtocol, i$->next()));
					{
						if ($nc(proto)->supportsState(state)) {
							return true;
						}
					}
				}
			}
		}
	default:
		{
			return false;
		}
	}
}

int32_t XWM::getExtendedState($XWindowPeer* window) {
	$useLocalCurrentObjectStackCache();
	int32_t state = 0;
	{
		$load($XStateProtocol);
		$var($Iterator, i$, $nc($(getProtocols($XStateProtocol::class$)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XStateProtocol, proto, $cast($XStateProtocol, i$->next()));
			{
				state |= $nc(proto)->getState(window);
			}
		}
	}
	if (state != 0) {
		return state;
	} else {
		return $Frame::NORMAL;
	}
}

bool XWM::isStateChange($XDecoratedPeer* window, $XPropertyEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(window)->isShowing()) {
		$nc(XWM::stateLog)->finer("Window is not showing"_s);
		return false;
	}
	int32_t wm_state = $nc(window)->getWMState();
	if (wm_state == $XUtilConstants::WithdrawnState) {
		$nc(XWM::stateLog)->finer("WithdrawnState"_s);
		return false;
	} else {
		$init($PlatformLogger$Level);
		if ($nc(XWM::stateLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWM::stateLog)->finer($$str({"Window WM_STATE is "_s, $$str(wm_state)}));
		}
	}
	bool is_state_change = false;
	int64_t var$0 = $nc(e)->get_atom();
	if (var$0 == $nc(XWM::XA_WM_STATE)->getAtom()) {
		is_state_change = true;
	}
	{
		$load($XStateProtocol);
		$var($Iterator, i$, $nc($(getProtocols($XStateProtocol::class$)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XStateProtocol, proto, $cast($XStateProtocol, i$->next()));
			{
				is_state_change |= $nc(proto)->isStateChange(e);
				$init($PlatformLogger$Level);
				if ($nc(XWM::stateLog)->isLoggable($PlatformLogger$Level::FINEST)) {
					$nc(XWM::stateLog)->finest($$str({proto, ": is state changed = "_s, $$str(is_state_change)}));
				}
			}
		}
	}
	return is_state_change;
}

int32_t XWM::getState($XDecoratedPeer* window) {
	int32_t res = 0;
	int32_t wm_state = $nc(window)->getWMState();
	if (wm_state == $XUtilConstants::IconicState) {
		res = $Frame::ICONIFIED;
	} else {
		res = $Frame::NORMAL;
	}
	res |= getExtendedState(window);
	return res;
}

void XWM::setLayer($XWindowPeer* window, int32_t layer) {
	$useLocalCurrentObjectStackCache();
	{
		$load($XLayerProtocol);
		$var($Iterator, i$, $nc($(getProtocols($XLayerProtocol::class$)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XLayerProtocol, proto, $cast($XLayerProtocol, i$->next()));
			{
				if ($nc(proto)->supportsLayer(layer)) {
					proto->setLayer(window, layer);
				}
			}
		}
	}
	$XToolkit::XSync();
}

void XWM::setExtendedState($XWindowPeer* window, int32_t state) {
	$useLocalCurrentObjectStackCache();
	{
		$load($XStateProtocol);
		$var($Iterator, i$, $nc($(getProtocols($XStateProtocol::class$)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XStateProtocol, proto, $cast($XStateProtocol, i$->next()));
			{
				if ($nc(proto)->supportsState(state)) {
					proto->setState(window, state);
					break;
				}
			}
		}
	}
	if (!$nc(window)->isShowing()) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				int64_t var$1 = $XToolkit::getDisplay();
				int64_t var$2 = window->getWindow();
				$XlibWrapper::XDeleteProperty(var$1, var$2, $nc(XWM::XA_KWM_WIN_ICONIFIED)->getAtom());
				int64_t var$3 = $XToolkit::getDisplay();
				int64_t var$4 = window->getWindow();
				$XlibWrapper::XDeleteProperty(var$3, var$4, $nc(XWM::XA_KWM_WIN_MAXIMIZED)->getAtom());
			} catch ($Throwable& var$5) {
				$assign(var$0, var$5);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$XToolkit::XSync();
}

void XWM::unshadeKludge($XDecoratedPeer* window) {
	$useLocalCurrentObjectStackCache();
	if (!XWM::$assertionsDisabled && !($nc(window)->isShowing())) {
		$throwNew($AssertionError);
	}
	{
		$load($XStateProtocol);
		$var($Iterator, i$, $nc($(getProtocols($XStateProtocol::class$)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XStateProtocol, proto, $cast($XStateProtocol, i$->next()));
			{
				$nc(proto)->unshadeKludge(window);
			}
		}
	}
	$XToolkit::XSync();
}

void XWM::init() {
	$init(XWM);
	if (XWM::inited) {
		return;
	}
	initAtoms();
	getWM();
	XWM::inited = true;
}

void XWM::initializeProtocols() {
	$useLocalCurrentObjectStackCache();
	$var($XNETProtocol, net_protocol, XWM::g_net_protocol);
	if (net_protocol != nullptr) {
		if (!net_protocol->active()) {
			$assign(net_protocol, nullptr);
		} else {
			if (net_protocol->doStateProtocol()) {
				$load($XStateProtocol);
				addProtocol($XStateProtocol::class$, net_protocol);
			}
			if (net_protocol->doLayerProtocol()) {
				$load($XLayerProtocol);
				addProtocol($XLayerProtocol::class$, net_protocol);
			}
		}
	}
	$var($XWINProtocol, win, XWM::g_win_protocol);
	if (win != nullptr) {
		if (win->active()) {
			if (win->doStateProtocol()) {
				$load($XStateProtocol);
				addProtocol($XStateProtocol::class$, win);
			}
			if (win->doLayerProtocol()) {
				$load($XLayerProtocol);
				addProtocol($XLayerProtocol::class$, win);
			}
		}
	}
}

$Insets* XWM::guessInsets($XDecoratedPeer* window) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, res, $cast($Insets, $nc(this->storedInsets)->get($nc($of(window))->getClass())));
	if (res == nullptr) {
		switch (this->WMID) {
		case XWM::ENLIGHTEN_WM:
			{
				$assign(res, $new($Insets, 19, 4, 4, 4));
				break;
			}
		case XWM::CDE_WM:
			{
				$assign(res, $new($Insets, 28, 6, 6, 6));
				break;
			}
		case XWM::NO_WM:
			{}
		case XWM::LG3D_WM:
			{
				$assign(res, XWM::zeroInsets);
				break;
			}
		case XWM::UNITY_COMPIZ_WM:
			{
				$assign(res, $new($Insets, 28, 1, 1, 1));
				break;
			}
		case XWM::MOTIF_WM:
			{}
		case XWM::OPENLOOK_WM:
			{}
		default:
			{
				$assign(res, XWM::defaultInsets);
			}
		}
	}
	$init($PlatformLogger$Level);
	if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XWM::insLog)->finest($$str({"WM guessed insets: "_s, res}));
	}
	return res;
}

bool XWM::configureGravityBuggy() {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	if (XWM::awtWMStaticGravity == -1) {
		XWM::awtWMStaticGravity = ($XToolkit::getEnv("_JAVA_AWT_WM_STATIC_GRAVITY"_s) != nullptr) ? 1 : 0;
	}
	if (XWM::awtWMStaticGravity == 1) {
		return true;
	}
	switch (getWMID()) {
	case XWM::ICE_WM:
		{
			if (XWM::g_net_protocol != nullptr) {
				$var($String, wm_name, $nc(XWM::g_net_protocol)->getWMName());
				$var($Pattern, pat, $Pattern::compile("^IceWM (\\d+)\\.(\\d+)\\.(\\d+).*$"_s));
				try {
					$var($Matcher, match, $nc(pat)->matcher(wm_name));
					if ($nc(match)->matches()) {
						int32_t v1 = $Integer::parseInt($(match->group(1)));
						int32_t v2 = $Integer::parseInt($(match->group(2)));
						int32_t v3 = $Integer::parseInt($(match->group(3)));
						return !(v1 > 1 || (v1 == 1 && (v2 > 2 || (v2 == 2 && v3 >= 2))));
					}
				} catch ($Exception& e) {
					return true;
				}
			}
			return true;
		}
	case XWM::ENLIGHTEN_WM:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

$Insets* XWM::getInsetsFromExtents(int64_t window) {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	if (window == $XConstants::None) {
		return nullptr;
	}
	$var($XNETProtocol, net_protocol, $nc($(getWM()))->getNETProtocol());
	if (net_protocol != nullptr && net_protocol->active()) {
		$var($Insets, insets, getInsetsFromProp(window, XWM::XA_NET_FRAME_EXTENTS));
		$init($PlatformLogger$Level);
		if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XWM::insLog)->fine("_NET_FRAME_EXTENTS: {0}"_s, $$new($ObjectArray, {$of(insets)}));
		}
		if (insets != nullptr) {
			return insets;
		}
	}
	switch (getWMID()) {
	case XWM::KDE2_WM:
		{
			return getInsetsFromProp(window, XWM::XA_KDE_NET_WM_FRAME_STRUT);
		}
	case XWM::ENLIGHTEN_WM:
		{
			return getInsetsFromProp(window, XWM::XA_E_FRAME_SIZE);
		}
	default:
		{
			return nullptr;
		}
	}
}

$Insets* XWM::getInsetsFromProp(int64_t window, $XAtom* atom) {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	if (window == $XConstants::None) {
		return nullptr;
	}
	$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, window, atom, (int64_t)0, (int64_t)4, false, $XAtom::XA_CARDINAL));
	{
		$var($Throwable, var$0, nullptr);
		$var($Insets, var$2, nullptr);
		bool return$1 = false;
		try {
			bool var$5 = getter->execute() != $XConstants::Success;
			bool var$4 = var$5 || getter->getData() == 0;
			bool var$3 = var$4 || getter->getActualType() != $XAtom::XA_CARDINAL;
			if (var$3 || getter->getActualFormat() != 32) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			} else {
				int32_t var$6 = (int32_t)$Native::getCard32(getter->getData(), 2);
				int32_t var$7 = (int32_t)$Native::getCard32(getter->getData(), 0);
				int32_t var$8 = (int32_t)$Native::getCard32(getter->getData(), 3);
				$assign(var$2, $new($Insets, var$6, var$7, var$8, (int32_t)$Native::getCard32(getter->getData(), 1)));
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$9) {
			$assign(var$0, var$9);
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

void XWM::requestWMExtents(int64_t window) {
	$init(XWM);
	$useLocalCurrentObjectStackCache();
	if (window == $XConstants::None) {
		return;
	}
	$nc(XWM::log)->fine("Requesting FRAME_EXTENTS"_s);
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	msg->zero();
	msg->set_type($XConstants::ClientMessage);
	msg->set_display($XToolkit::getDisplay());
	msg->set_window(window);
	msg->set_format(32);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($XNETProtocol, net_protocol, $nc($(getWM()))->getNETProtocol());
			if (net_protocol != nullptr && net_protocol->active()) {
				msg->set_message_type($nc(XWM::XA_NET_REQUEST_FRAME_EXTENTS)->getAtom());
				int64_t var$1 = $XToolkit::getDisplay();
				int64_t var$2 = $XToolkit::getDefaultRootWindow();
				$XlibWrapper::XSendEvent(var$1, var$2, false, $XConstants::SubstructureRedirectMask | $XConstants::SubstructureNotifyMask, msg->getPData());
			}
			if (getWMID() == XWM::KDE2_WM) {
				msg->set_message_type($nc(XWM::XA_KDE_NET_WM_FRAME_STRUT)->getAtom());
				int64_t var$3 = $XToolkit::getDisplay();
				int64_t var$4 = $XToolkit::getDefaultRootWindow();
				$XlibWrapper::XSendEvent(var$3, var$4, false, $XConstants::SubstructureRedirectMask | $XConstants::SubstructureNotifyMask, msg->getPData());
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$XToolkit::awtUnlock();
			msg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool XWM::syncTopLevelPos(int64_t window, $XWindowAttributes* attrs) {
	int32_t tries = 0;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			do {
				$XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), window, $nc(attrs)->pData);
				bool var$3 = $nc(attrs)->get_x() != 0;
				if (var$3 || $nc(attrs)->get_y() != 0) {
					var$2 = true;
					return$1 = true;
					goto $finally;
				}
				++tries;
				$XToolkit::XSync();
			} while (tries < 50);
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
	return false;
}

$Insets* XWM::getInsets($XDecoratedPeer* win, int64_t window, int64_t parent) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, correctWM, XWM::getInsetsFromExtents(window));
	$init($PlatformLogger$Level);
	if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XWM::insLog)->finer("Got insets from property: {0}"_s, $$new($ObjectArray, {$of(correctWM)}));
	}
	if (correctWM == nullptr) {
		$assign(correctWM, $new($Insets, 0, 0, 0, 0));
		correctWM->top = -1;
		correctWM->left = -1;
		$var($XWindowAttributes, lwinAttr, $new($XWindowAttributes));
		$var($XWindowAttributes, pattr, $new($XWindowAttributes));
		{
			$var($Throwable, var$0, nullptr);
			$var($Insets, var$2, nullptr);
			bool return$1 = false;
			try {
				switch (XWM::getWMID()) {
				case XWM::ENLIGHTEN_WM:
					{
						{
							syncTopLevelPos(parent, lwinAttr);
							correctWM->left = lwinAttr->get_x();
							correctWM->top = lwinAttr->get_y();
							int64_t var$3 = $XToolkit::getDisplay();
							$XlibWrapper::XGetWindowAttributes(var$3, $XlibUtil::getParentWindow(parent), pattr->pData);
							int32_t var$4 = pattr->get_width();
							correctWM->right = var$4 - (lwinAttr->get_width() + correctWM->left);
							int32_t var$5 = pattr->get_height();
							correctWM->bottom = var$5 - (lwinAttr->get_height() + correctWM->top);
							break;
						}
					}
				case XWM::ICE_WM:
					{}
				case XWM::KDE2_WM:
					{}
				case XWM::CDE_WM:
					{}
				case XWM::MOTIF_WM:
					{
						{
							if (syncTopLevelPos(parent, lwinAttr)) {
								correctWM->top = lwinAttr->get_y();
								correctWM->left = lwinAttr->get_x();
								correctWM->right = correctWM->left;
								correctWM->bottom = correctWM->left;
							} else {
								$assign(var$2, nullptr);
								return$1 = true;
								goto $finally;
							}
							break;
						}
					}
				case XWM::SAWFISH_WM:
					{}
				case XWM::OPENLOOK_WM:
					{
						{
							syncTopLevelPos(window, lwinAttr);
							correctWM->top = lwinAttr->get_y();
							correctWM->left = lwinAttr->get_x();
							correctWM->right = correctWM->left;
							correctWM->bottom = correctWM->left;
							break;
						}
					}
				case XWM::OTHER_WM:
					{}
				default:
					{
						{
							if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINEST)) {
								$nc(XWM::insLog)->finest("Getting correct insets for OTHER_WM/default, parent: {0}"_s, $$new($ObjectArray, {$($of($Long::valueOf(parent)))}));
							}
							syncTopLevelPos(parent, lwinAttr);
							int32_t status = $XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), window, lwinAttr->pData);
							status = $XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), parent, pattr->pData);
							if (lwinAttr->get_root() == parent) {
								$nc(XWM::insLog)->finest("our parent is root so insets should be zero"_s);
								$assign(correctWM, $new($Insets, 0, 0, 0, 0));
								break;
							}
							bool var$8 = lwinAttr->get_x() == 0;
							bool var$7 = var$8 && lwinAttr->get_y() == 0;
							if (var$7) {
								int32_t var$10 = lwinAttr->get_width();
								int32_t var$9 = var$10 + 2 * lwinAttr->get_border_width();
								var$7 = var$9 == pattr->get_width();
							}
							bool var$6 = var$7;
							if (var$6) {
								int32_t var$12 = lwinAttr->get_height();
								int32_t var$11 = var$12 + 2 * lwinAttr->get_border_width();
								var$6 = var$11 == pattr->get_height();
							}
							if (var$6) {
								if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINEST)) {
									$nc(XWM::insLog)->finest("Double reparenting detected, pattr({2})={0}, lwinAttr({3})={1}"_s, $$new($ObjectArray, {
										$of(lwinAttr),
										$of(pattr),
										$($of($Long::valueOf(parent))),
										$($of($Long::valueOf(window)))
									}));
								}
								lwinAttr->set_x(pattr->get_x());
								lwinAttr->set_y(pattr->get_y());
								int32_t var$13 = lwinAttr->get_border_width();
								lwinAttr->set_border_width(var$13 + pattr->get_border_width());
								int64_t grand_parent = $XlibUtil::getParentWindow(parent);
								if (grand_parent == lwinAttr->get_root()) {
									$assign(var$2, nullptr);
									return$1 = true;
									goto $finally;
								} else {
									parent = grand_parent;
									$XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), parent, pattr->pData);
								}
							}
							if ($nc(XWM::insLog)->isLoggable($PlatformLogger$Level::FINEST)) {
								$nc(XWM::insLog)->finest("Attrs before calculation: pattr({2})={0}, lwinAttr({3})={1}"_s, $$new($ObjectArray, {
									$of(lwinAttr),
									$of(pattr),
									$($of($Long::valueOf(parent))),
									$($of($Long::valueOf(window)))
								}));
							}
							int32_t var$15 = lwinAttr->get_y();
							int32_t var$14 = var$15 + lwinAttr->get_border_width();
							int32_t var$17 = lwinAttr->get_x();
							int32_t var$16 = var$17 + lwinAttr->get_border_width();
							int32_t var$19 = pattr->get_height();
							int32_t var$22 = lwinAttr->get_y();
							int32_t var$21 = var$22 + lwinAttr->get_height();
							int32_t var$20 = (var$21 + 2 * lwinAttr->get_border_width());
							int32_t var$18 = var$19 - var$20;
							int32_t var$23 = pattr->get_width();
							int32_t var$26 = lwinAttr->get_x();
							int32_t var$25 = var$26 + lwinAttr->get_width();
							int32_t var$24 = (var$25 + 2 * lwinAttr->get_border_width());
							$assign(correctWM, $new($Insets, var$14, var$16, var$18, var$23 - var$24));
							break;
						}
					}
				}
			} catch ($Throwable& var$27) {
				$assign(var$0, var$27);
			} $finally: {
				lwinAttr->dispose();
				pattr->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$nc(correctWM)->top = $nc(win)->scaleUp(correctWM->top);
	correctWM->bottom = win->scaleUp(correctWM->bottom);
	correctWM->left = win->scaleUp(correctWM->left);
	correctWM->right = win->scaleUp(correctWM->right);
	if ($nc(this->storedInsets)->get($of(win)->getClass()) == nullptr) {
		$nc(this->storedInsets)->put($of(win)->getClass(), correctWM);
	}
	return correctWM;
}

bool XWM::isDesktopWindow(int64_t w) {
	$useLocalCurrentObjectStackCache();
	if (XWM::g_net_protocol != nullptr) {
		$var($XAtomList, wtype, $nc($($XAtom::get("_NET_WM_WINDOW_TYPE"_s)))->getAtomListPropertyList(w));
		return $nc(wtype)->contains($($XAtom::get("_NET_WM_WINDOW_TYPE_DESKTOP"_s)));
	} else {
		return false;
	}
}

$XNETProtocol* XWM::getNETProtocol() {
	return XWM::g_net_protocol;
}

bool XWM::setNetWMIcon($XWindowPeer* window, $List* icons) {
	if (XWM::g_net_protocol != nullptr && $nc(XWM::g_net_protocol)->active()) {
		$nc(XWM::g_net_protocol)->setWMIcons(window, icons);
		return getWMID() != XWM::ICE_WM;
	}
	return false;
}

void clinit$XWM($Class* class$) {
	XWM::$assertionsDisabled = !XWM::class$->desiredAssertionStatus();
	$assignStatic(XWM::log, $PlatformLogger::getLogger("sun.awt.X11.XWM"_s));
	$assignStatic(XWM::insLog, $PlatformLogger::getLogger("sun.awt.X11.insets.XWM"_s));
	$assignStatic(XWM::stateLog, $PlatformLogger::getLogger("sun.awt.X11.states.XWM"_s));
	$assignStatic(XWM::XA_MWM_HINTS, $new($XAtom));
	$init($XlibWrapper);
	$assignStatic(XWM::unsafe, $XlibWrapper::unsafe);
	$assignStatic(XWM::XA_WM_STATE, $new($XAtom));
	$assignStatic(XWM::XA_E_FRAME_SIZE, $new($XAtom));
	$assignStatic(XWM::XA_KDE_NET_WM_FRAME_STRUT, $new($XAtom));
	$assignStatic(XWM::XA_KWM_WIN_ICONIFIED, $new($XAtom));
	$assignStatic(XWM::XA_KWM_WIN_MAXIMIZED, $new($XAtom));
	$assignStatic(XWM::XA_OL_DECOR_DEL, $new($XAtom));
	$assignStatic(XWM::XA_OL_DECOR_HEADER, $new($XAtom));
	$assignStatic(XWM::XA_OL_DECOR_RESIZE, $new($XAtom));
	$assignStatic(XWM::XA_OL_DECOR_PIN, $new($XAtom));
	$assignStatic(XWM::XA_OL_DECOR_CLOSE, $new($XAtom));
	$assignStatic(XWM::XA_NET_FRAME_EXTENTS, $new($XAtom));
	$assignStatic(XWM::XA_NET_REQUEST_FRAME_EXTENTS, $new($XAtom));
	$assignStatic(XWM::zeroInsets, $new($Insets, 0, 0, 0, 0));
	$assignStatic(XWM::defaultInsets, $new($Insets, 25, 5, 5, 5));
	$assignStatic(XWM::g_net_protocol, nullptr);
	$assignStatic(XWM::g_win_protocol, nullptr);
	$assignStatic(XWM::XA_ENLIGHTENMENT_COMMS, $new($XAtom, "ENLIGHTENMENT_COMMS"_s, false));
	$assignStatic(XWM::XA_DT_SM_WINDOW_INFO, $new($XAtom, "_DT_SM_WINDOW_INFO"_s, false));
	$assignStatic(XWM::XA_DT_SM_STATE_INFO, $new($XAtom, "_DT_SM_STATE_INFO"_s, false));
	$assignStatic(XWM::XA_MOTIF_WM_INFO, $new($XAtom, "_MOTIF_WM_INFO"_s, false));
	$assignStatic(XWM::XA_DT_WORKSPACE_CURRENT, $new($XAtom, "_DT_WORKSPACE_CURRENT"_s, false));
	XWM::awtWMNonReparenting = -1;
	$assignStatic(XWM::XA_ICEWM_WINOPTHINT, $new($XAtom, "_ICEWM_WINOPTHINT"_s, false));
	$assignStatic(XWM::opt, $new($chars, {
		u'A',
		u'W',
		u'T',
		u'_',
		u'I',
		u'C',
		u'E',
		u'W',
		u'M',
		u'_',
		u'T',
		u'E',
		u'S',
		u'T',
		u'\0',
		u'a',
		u'l',
		u'l',
		u'W',
		u'o',
		u'r',
		u'k',
		u's',
		u'p',
		u'a',
		u'c',
		u'e',
		u's',
		u'\0',
		u'0',
		u'\0'
	}));
	$assignStatic(XWM::XA_SUN_WM_PROTOCOLS, $new($XAtom, "_SUN_WM_PROTOCOLS"_s, false));
	XWM::winmgr_running = false;
	$assignStatic(XWM::detectWMHandler, $new($XWM$1));
	XWM::awt_wmgr = XWM::UNDETERMINED_WM;
	XWM::inited = false;
	XWM::awtWMStaticGravity = -1;
}

XWM::XWM() {
}

$Class* XWM::load$($String* name, bool initialize) {
	$loadClass(XWM, name, initialize, &_XWM_ClassInfo_, clinit$XWM, allocate$XWM);
	return class$;
}

$Class* XWM::class$ = nullptr;

		} // X11
	} // awt
} // sun