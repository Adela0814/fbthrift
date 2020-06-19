#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

# pyre-unsafe

import typing as __T  # sometimes `t` is used as a field name

from thrift import Thrift
from thrift.protocol.TProtocol import TProtocolBase

__property__ = property  # sometimes `property` is used as a field name


UTF8STRINGS: bool


class EmptyEnum(int):

    _VALUES_TO_NAMES: __T.ClassVar[__T.Dict[EmptyEnum, str]]
    _NAMES_TO_VALUES: __T.ClassVar[__T.Dict[str, EmptyEnum]]


class City(int):
    NYC: __T.ClassVar[City]
    MPK: __T.ClassVar[City]
    SEA: __T.ClassVar[City]
    LON: __T.ClassVar[City]

    _VALUES_TO_NAMES: __T.ClassVar[__T.Dict[City, str]]
    _NAMES_TO_VALUES: __T.ClassVar[__T.Dict[str, City]]


class Company(int):
    FACEBOOK: __T.ClassVar[Company]
    WHATSAPP: __T.ClassVar[Company]
    OCULUS: __T.ClassVar[Company]
    INSTAGRAM: __T.ClassVar[Company]

    _VALUES_TO_NAMES: __T.ClassVar[__T.Dict[Company, str]]
    _NAMES_TO_VALUES: __T.ClassVar[__T.Dict[str, Company]]


class Internship:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        weeks: __T.Optional[int] = ...,
        title: __T.Optional[str] = ...,
        employer: __T.Optional[Company] = ...
    ) -> None:
        ...

    @__property__
    def weeks(self) -> int: ...
    @weeks.setter
    def weeks(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def title(self) -> str: ...
    @title.setter
    def title(self, value: __T.Optional[str]) -> None: ...
    @__property__
    def employer(self) -> __T.Optional[Company]: ...
    @employer.setter
    def employer(self, value: __T.Optional[Company]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...


class Range:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        min: __T.Optional[int] = ...,
        max: __T.Optional[int] = ...
    ) -> None:
        ...

    @__property__
    def min(self) -> int: ...
    @min.setter
    def min(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def max(self) -> int: ...
    @max.setter
    def max(self, value: __T.Optional[int]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...


class struct1:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        a: int = ...,
        b: str = ...
    ) -> None:
        ...

    @__property__
    def a(self) -> int: ...
    @a.setter
    def a(self, value: int) -> None: ...
    @__property__
    def b(self) -> str: ...
    @b.setter
    def b(self, value: str) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...


class struct2:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        a: __T.Optional[int] = ...,
        b: __T.Optional[str] = ...,
        c: __T.Optional[struct1] = ...,
        d: __T.Optional[__T.List[int]] = ...
    ) -> None:
        ...

    @__property__
    def a(self) -> int: ...
    @a.setter
    def a(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def b(self) -> str: ...
    @b.setter
    def b(self, value: __T.Optional[str]) -> None: ...
    @__property__
    def c(self) -> struct1: ...
    @c.setter
    def c(self, value: __T.Optional[struct1]) -> None: ...
    @__property__
    def d(self) -> __T.List[int]: ...
    @d.setter
    def d(self, value: __T.Optional[__T.List[int]]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...


class struct3:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        a: __T.Optional[str] = ...,
        b: __T.Optional[int] = ...,
        c: __T.Optional[struct2] = ...
    ) -> None:
        ...

    @__property__
    def a(self) -> str: ...
    @a.setter
    def a(self, value: __T.Optional[str]) -> None: ...
    @__property__
    def b(self) -> int: ...
    @b.setter
    def b(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def c(self) -> struct2: ...
    @c.setter
    def c(self, value: __T.Optional[struct2]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...


class struct4:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        a: __T.Optional[int] = ...,
        b: __T.Optional[float] = ...,
        c: __T.Optional[int] = ...
    ) -> None:
        ...

    @__property__
    def a(self) -> int: ...
    @a.setter
    def a(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def b(self) -> __T.Optional[float]: ...
    @b.setter
    def b(self, value: __T.Optional[float]) -> None: ...
    @__property__
    def c(self) -> __T.Optional[int]: ...
    @c.setter
    def c(self, value: __T.Optional[int]) -> None: ...


    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...


class union1:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        i: __T.Optional[int] = ...,
        d: __T.Optional[float] = ...
    ) -> None:
        ...

    @__property__
    def i(self) -> int: ...
    @i.setter
    def i(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def d(self) -> float: ...
    @d.setter
    def d(self, value: __T.Optional[float]) -> None: ...

    def getType(self) -> int: ...

    def get_i(self) -> int: ...
    def set_i(self, value: int) -> None: ...
    def get_d(self) -> float: ...
    def set_d(self, value: float) -> None: ...

    __EMPTY__: int = ...
    I: int = ...
    D: int = ...

    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...


class union2:
    thrift_spec: __T.Tuple[__T.Optional[__T.Tuple[int, int, str, __T.Any, __T.Optional[int], int]]]
    thrift_field_annotations: __T.Dict[int, __T.Dict[str, str]]
    thrift_struct_annotations: __T.Dict[str, str]

    def __init__(
        self,
        i: __T.Optional[int] = ...,
        d: __T.Optional[float] = ...,
        s: __T.Optional[struct1] = ...,
        u: __T.Optional[union1] = ...
    ) -> None:
        ...

    @__property__
    def i(self) -> int: ...
    @i.setter
    def i(self, value: __T.Optional[int]) -> None: ...
    @__property__
    def d(self) -> float: ...
    @d.setter
    def d(self, value: __T.Optional[float]) -> None: ...
    @__property__
    def s(self) -> struct1: ...
    @s.setter
    def s(self, value: __T.Optional[struct1]) -> None: ...
    @__property__
    def u(self) -> union1: ...
    @u.setter
    def u(self, value: __T.Optional[union1]) -> None: ...

    def getType(self) -> int: ...

    def get_i(self) -> int: ...
    def set_i(self, value: int) -> None: ...
    def get_d(self) -> float: ...
    def set_d(self, value: float) -> None: ...
    def get_s(self) -> struct1: ...
    def set_s(self, value: struct1) -> None: ...
    def get_u(self) -> union1: ...
    def set_u(self, value: union1) -> None: ...

    __EMPTY__: int = ...
    I: int = ...
    D: int = ...
    S: int = ...
    U: int = ...

    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: __T.Any) -> bool: ...
    def __ne__(self, other: __T.Any) -> bool: ...


MyCompany = Company
MyStringIdentifier = str
MyIntIdentifier = int
MyMapIdentifier = __T.Dict[str, str]
