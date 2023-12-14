use proconio::input;

fn main() {
    input! {
        h: usize,
        w: usize,
        a: [[usize;w]; h]
    }

    let mut horizontal = vec![0usize; h];
    let mut vertical = vec![0usize; w];

    for i in 0..h {
        for j in 0..w {
            horizontal[i] += a[i][j];
            vertical[j] += a[i][j];
        }
    }

    for i in 0..h {
        for j in 0..w {
            if j == 0 {
                print!("{}", horizontal[i] + vertical[j] - a[i][j]);
            } else {
                print!(" {}", horizontal[i] + vertical[j] - a[i][j]);
            }
        }
        println!("");
    }
}
