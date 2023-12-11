use proconio::input;

fn main() {
    input! {
        M: usize,
        D: usize,
        y: usize,
        m: usize,
        d: usize,
    }

    if d < D {
        println!("{} {} {}", y, m, d + 1);
    } else if d == D {
        if m == M {
            println!("{} {} {}", y + 1, 1, 1);
        } else {
            println!("{} {} {}", y, m + 1, 1);
        }
    }
}
