use core::panic;

use proconio::input;

fn main() {
    input! {
        s1: String,
        s2: String,
        s3: String,
        s4: String,
        s5: String,
        s6: String,
        s7: String,
        s8: String,
    }

    let mut col = 0;
    let mut row = 8;
    for s in [s1, s2, s3, s4, s5, s6, s7, s8].iter() {
        match s.find('*') {
            Some(result) => {
                col = result;
                break;
            }
            None => (),
        }
        row -= 1;
    }

    let col_en = match col {
        0 => "a",
        1 => "b",
        2 => "c",
        3 => "d",
        4 => "e",
        5 => "f",
        6 => "g",
        7 => "h",
        _ => panic!(),
    };

    println!("{}", col_en.to_owned() + &row.to_string());
}
