<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
class module_CONSTANTS {
  /**
   * Original thrift constant:-
   * i32 myInt
   */
  <<__Memoize>>
  public static function myInt(): int{
    return 1337;
  }

  /**
   * Original thrift constant:-
   * string name
   */
  <<__Memoize>>
  public static function name(): string{
    return "Mark Zuckerberg";
  }

  /**
   * Original thrift constant:-
   * list<map<string, i32>> states
   */
  <<__Memoize>>
  public static function states(): ConstVector<ConstMap<string, int>>{
    return ImmVector {
      ImmMap {
        "San Diego" => 3211000,
        "Sacramento" => 479600,
        "SF" => 837400,
      },
      ImmMap {
        "New York" => 8406000,
        "Albany" => 98400,
      },
    };
  }

  /**
   * Original thrift constant:-
   * double x
   */
  <<__Memoize>>
  public static function x(): float{
    return 1.0;
  }

  /**
   * Original thrift constant:-
   * double y
   */
  <<__Memoize>>
  public static function y(): float{
    return 1000000.0;
  }

  /**
   * Original thrift constant:-
   * double z
   */
  <<__Memoize>>
  public static function z(): float{
    return 1e+09;
  }

  /**
   * Original thrift constant:-
   * double zeroDoubleValue
   */
  <<__Memoize>>
  public static function zeroDoubleValue(): float{
    return 0.0;
  }

  /**
   * Original thrift constant:-
   * double longDoubleValue
   */
  <<__Memoize>>
  public static function longDoubleValue(): float{
    return 2.59961e-05;
  }

  /**
   * Original thrift constant:-
   * enum module.Company my_company
   */
  <<__Memoize>>
  public static function my_company(): Company{
    return Company::FACEBOOK;
  }

  /**
   * Original thrift constant:-
   * string foo
   */
  <<__Memoize>>
  public static function foo(): string{
    return "foo";
  }

  /**
   * Original thrift constant:-
   * i32 bar
   */
  <<__Memoize>>
  public static function bar(): int{
    return 42;
  }

  /**
   * Original thrift constant:-
   * map<string, string> mymap
   */
  <<__Memoize>>
  public static function mymap(): ConstMap<string, string>{
    return ImmMap {
      "keys" => "values",
    };
  }

  /**
   * Original thrift constant:-
   * struct module.Internship instagram
   */
  <<__Memoize>>
  public static function instagram(): Internship{
    return Internship::fromShape(
      shape(
        "weeks" => 12,
        "title" => "Software Engineer",
        "employer" => Company::INSTAGRAM,
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.Internship partial_const
   */
  <<__Memoize>>
  public static function partial_const(): Internship{
    return Internship::fromShape(
      shape(
        "weeks" => 8,
        "title" => "Some Job",
      )
    );
  }

  /**
   * Original thrift constant:-
   * list<struct module.Range> kRanges
   */
  <<__Memoize>>
  public static function kRanges(): ConstVector<Range>{
    return ImmVector {
      Range::fromShape(
        shape(
          "min" => 1,
          "max" => 2,
        )
      ),
      Range::fromShape(
        shape(
          "min" => 5,
          "max" => 6,
        )
      ),
    };
  }

  /**
   * Original thrift constant:-
   * list<struct module.Internship> internList
   */
  <<__Memoize>>
  public static function internList(): ConstVector<Internship>{
    return ImmVector {
      Internship::fromShape(
        shape(
          "weeks" => 12,
          "title" => "Software Engineer",
          "employer" => Company::INSTAGRAM,
        )
      ),
      Internship::fromShape(
        shape(
          "weeks" => 10,
          "title" => "Sales Intern",
          "employer" => Company::FACEBOOK,
        )
      ),
    };
  }

  /**
   * Original thrift constant:-
   * struct module.struct1 pod_0
   */
  <<__Memoize>>
  public static function pod_0(): struct1{
    return struct1::fromShape(
      shape(
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.struct1 pod_1
   */
  <<__Memoize>>
  public static function pod_1(): struct1{
    return struct1::fromShape(
      shape(
        "a" => 10,
        "b" => "foo",
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.struct2 pod_2
   */
  <<__Memoize>>
  public static function pod_2(): struct2{
    return struct2::fromShape(
      shape(
        "a" => 98,
        "b" => "gaz",
        "c" => struct1::fromShape(
          shape(
            "a" => 12,
            "b" => "bar",
          )
        ),
        "d" => Vector {
          11,
          22,
          33,
        },
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.struct2 pod_trailing_commas
   */
  <<__Memoize>>
  public static function pod_trailing_commas(): struct2{
    return struct2::fromShape(
      shape(
        "a" => 98,
        "b" => "gaz",
        "c" => struct1::fromShape(
          shape(
            "a" => 12,
            "b" => "bar",
          )
        ),
        "d" => Vector {
          11,
          22,
          33,
        },
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.struct3 pod_3
   */
  <<__Memoize>>
  public static function pod_3(): struct3{
    return struct3::fromShape(
      shape(
        "a" => "abc",
        "b" => 456,
        "c" => struct2::fromShape(
          shape(
            "a" => 888,
            "c" => struct1::fromShape(
              shape(
                "b" => "gaz",
              )
            ),
            "d" => Vector {
              1,
              2,
              3,
            },
          )
        ),
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.struct4 pod_4
   */
  <<__Memoize>>
  public static function pod_4(): struct4{
    return struct4::fromShape(
      shape(
        "a" => 1234,
        "b" => 0.333,
        "c" => 25,
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.union1 u_1_1
   */
  <<__Memoize>>
  public static function u_1_1(): union1{
    return union1::fromShape(
      shape(
        "i" => 97,
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.union1 u_1_2
   */
  <<__Memoize>>
  public static function u_1_2(): union1{
    return union1::fromShape(
      shape(
        "d" => 5.6,
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.union1 u_1_3
   */
  <<__Memoize>>
  public static function u_1_3(): union1{
    return union1::fromShape(
      shape(
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_1
   */
  <<__Memoize>>
  public static function u_2_1(): union2{
    return union2::fromShape(
      shape(
        "i" => 51,
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_2
   */
  <<__Memoize>>
  public static function u_2_2(): union2{
    return union2::fromShape(
      shape(
        "d" => 6.7,
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_3
   */
  <<__Memoize>>
  public static function u_2_3(): union2{
    return union2::fromShape(
      shape(
        "s" => struct1::fromShape(
          shape(
            "a" => 8,
            "b" => "abacabb",
          )
        ),
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_4
   */
  <<__Memoize>>
  public static function u_2_4(): union2{
    return union2::fromShape(
      shape(
        "u" => union1::fromShape(
          shape(
            "i" => 43,
          )
        ),
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_5
   */
  <<__Memoize>>
  public static function u_2_5(): union2{
    return union2::fromShape(
      shape(
        "u" => union1::fromShape(
          shape(
            "d" => 9.8,
          )
        ),
      )
    );
  }

  /**
   * Original thrift constant:-
   * struct module.union2 u_2_6
   */
  <<__Memoize>>
  public static function u_2_6(): union2{
    return union2::fromShape(
      shape(
        "u" => union1::fromShape(
          shape(
          )
        ),
      )
    );
  }

  /**
   * Original thrift constant:-
   * string apostrophe
   */
  <<__Memoize>>
  public static function apostrophe(): string{
    return "'";
  }

  /**
   * Original thrift constant:-
   * string tripleApostrophe
   */
  <<__Memoize>>
  public static function tripleApostrophe(): string{
    return "'''";
  }

  /**
   * Original thrift constant:-
   * string quotationMark
   */
  <<__Memoize>>
  public static function quotationMark(): string{
    return "\"";
  }

  /**
   * Original thrift constant:-
   * string backslash
   */
  <<__Memoize>>
  public static function backslash(): string{
    return "\\";
  }

  /**
   * Original thrift constant:-
   * string escaped_a
   */
  <<__Memoize>>
  public static function escaped_a(): string{
    return "\x61";
  }

  /**
   * Original thrift constant:-
   * map<string, i32> char2ascii
   */
  <<__Memoize>>
  public static function char2ascii(): ConstMap<string, int>{
    return ImmMap {
      "'" => 39,
      "\"" => 34,
      "\\" => 92,
      "\x61" => 97,
    };
  }

  /**
   * Original thrift constant:-
   * list<string> escaped_strings
   */
  <<__Memoize>>
  public static function escaped_strings(): ConstVector<string>{
    return ImmVector {
      "\x61",
      "\xab",
      "\x6a",
      "\xa6",
      "\x61yyy",
      "\xabyyy",
      "\x6ayyy",
      "\xa6yyy",
      "zzz\x61",
      "zzz\xab",
      "zzz\x6a",
      "zzz\xa6",
      "zzz\x61yyy",
      "zzz\xabyyy",
      "zzz\x6ayyy",
      "zzz\xa6yyy",
    };
  }

  /**
   * Original thrift constant:-
   * bool false_c
   */
  <<__Memoize>>
  public static function false_c(): bool{
    return false;
  }

  /**
   * Original thrift constant:-
   * bool true_c
   */
  <<__Memoize>>
  public static function true_c(): bool{
    return true;
  }

  /**
   * Original thrift constant:-
   * byte zero_byte
   */
  <<__Memoize>>
  public static function zero_byte(): int{
    return 0;
  }

  /**
   * Original thrift constant:-
   * i16 zero16
   */
  <<__Memoize>>
  public static function zero16(): int{
    return 0;
  }

  /**
   * Original thrift constant:-
   * i32 zero32
   */
  <<__Memoize>>
  public static function zero32(): int{
    return 0;
  }

  /**
   * Original thrift constant:-
   * i64 zero64
   */
  <<__Memoize>>
  public static function zero64(): int{
    return 0;
  }

  /**
   * Original thrift constant:-
   * double zero_dot_zero
   */
  <<__Memoize>>
  public static function zero_dot_zero(): float{
    return 0.0;
  }

  /**
   * Original thrift constant:-
   * string empty_string
   */
  <<__Memoize>>
  public static function empty_string(): string{
    return "";
  }

  /**
   * Original thrift constant:-
   * list<i32> empty_int_list
   */
  <<__Memoize>>
  public static function empty_int_list(): ConstVector<int>{
    return ImmVector {
    };
  }

  /**
   * Original thrift constant:-
   * list<string> empty_string_list
   */
  <<__Memoize>>
  public static function empty_string_list(): ConstVector<string>{
    return ImmVector {
    };
  }

  /**
   * Original thrift constant:-
   * set<i32> empty_int_set
   */
  <<__Memoize>>
  public static function empty_int_set(): ConstSet<int>{
    return ImmSet {
    };
  }

  /**
   * Original thrift constant:-
   * set<string> empty_string_set
   */
  <<__Memoize>>
  public static function empty_string_set(): ConstSet<string>{
    return ImmSet {
    };
  }

  /**
   * Original thrift constant:-
   * map<i32, i32> empty_int_int_map
   */
  <<__Memoize>>
  public static function empty_int_int_map(): ConstMap<int, int>{
    return ImmMap {
    };
  }

  /**
   * Original thrift constant:-
   * map<i32, string> empty_int_string_map
   */
  <<__Memoize>>
  public static function empty_int_string_map(): ConstMap<int, string>{
    return ImmMap {
    };
  }

  /**
   * Original thrift constant:-
   * map<string, i32> empty_string_int_map
   */
  <<__Memoize>>
  public static function empty_string_int_map(): ConstMap<string, int>{
    return ImmMap {
    };
  }

  /**
   * Original thrift constant:-
   * map<string, string> empty_string_string_map
   */
  <<__Memoize>>
  public static function empty_string_string_map(): ConstMap<string, string>{
    return ImmMap {
    };
  }


}

