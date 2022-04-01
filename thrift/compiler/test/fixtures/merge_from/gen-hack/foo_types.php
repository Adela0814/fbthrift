<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * Fields
 */
class Fields implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    100 => shape(
      'var' => 'injected_field',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'injected_field' => 100,
  ];

  const type TConstructorShape = shape(
    ?'injected_field' => ?string,
  );

  const int STRUCTURAL_ID = 8264058527515912971;
  /**
   * Original thrift field:-
   * 100: string injected_field
   */
  public string $injected_field;

  public function __construct(?string $injected_field = null  )[] {
    $this->injected_field = $injected_field ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'injected_field'),
    );
  }

  public function getName()[]: string {
    return 'Fields';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "foo.Fields",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 100,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "injected_field",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}
