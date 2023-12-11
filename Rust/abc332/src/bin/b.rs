use proconio::input;

fn main() {
    input! {
        k: usize,
        g: usize,
        m: usize,
    }

    let mut gg = 0;
    let mut mm = 0;

    for _ in 0..k {
        if g == gg {
            gg = 0;
        } else if mm == 0 {
            mm = m;
        } else {
            let b = g - gg;
            if b > mm {
                gg += mm;
                mm = 0;
            } else {
                gg += b;
                mm -= b;
            }
        }
    }

    println!("{} {}", gg, mm);
}
